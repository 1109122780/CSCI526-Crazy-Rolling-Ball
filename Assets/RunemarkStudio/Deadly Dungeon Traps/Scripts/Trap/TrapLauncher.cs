namespace Runemark.DeadlyDungeonTraps
{
    using UnityEngine;
    using System.Collections;
    using System.Collections.Generic;

#if UNITY_EDITOR
    using UnityEditor;
    using UnityEditorInternal;
#endif
    [AddComponentMenu("Deadly Dungeon Traps/Mechanisms/Launcher")]
    [HelpURL("https://traps.runemarkstudio.com/traps/trap-mechanism/trap-launcher")]
    public class TrapLauncher : TrapMechanism
    {
        [Min(0f)] public float force = 5f;
        [Min(0f)] public float maxDistance = 20f;

        [Min(0)] public int ammunition;        
        public bool randomProjectile;
        public bool projectileStickOnCollision;
        public List<GameObject> projectilePrefabs;
        [Min(0)] public int projectilePoolSize = 10;

        Dictionary<string, Queue<GameObject>> projectilePool = new Dictionary<string, Queue<GameObject>>();
        int nextProjectile = 0;
        bool useAmmo;

        int currAmmo;


        void OnEnable()
        {
            currAmmo = ammunition;
            useAmmo = currAmmo > 0;
        }

        protected override bool Process()
        {
            var prefab = projectilePrefabs[nextProjectile];
            SelectNextPrefab();
                   
            GameObject go = CreateProjectile(prefab, transform.position, transform.rotation);
            TrapProjectile projectile = go.GetComponent<TrapProjectile>();
            projectile.enabled = true;
            projectile.force = force;
            projectile.distanceLeft = maxDistance <= 0 ? 1000 : maxDistance;
            projectile.sticky = projectileStickOnCollision;

            if (useAmmo) 
            {
                currAmmo--;
                if (currAmmo <= 0)
                {
                    projectilePrefabs.Remove(prefab);
                    isActive = false;
                    return true;
                }
            }
            
            return true;
        }
        protected override void ResetMechanism()
        {
            currAmmo = ammunition;
            nextProjectile = 0;
        }

        void SelectNextPrefab()
        {
            if (randomProjectile)
            {
                nextProjectile = Random.Range(0, projectilePrefabs.Count);
            }
            else
            {
                nextProjectile++;
                if (nextProjectile >= projectilePrefabs.Count) nextProjectile = 0;
            }
        }

        GameObject CreateProjectile(GameObject prefab, Vector3 position, Quaternion rotation)
        {
            GameObject result = null;
            if (!projectilePool.ContainsKey(prefab.name))
                projectilePool.Add(prefab.name, new Queue<GameObject>());

            if (projectilePool[prefab.name].Count < projectilePoolSize)
            {
                result = Instantiate<GameObject>(prefab, position, rotation);                
            }
            else
            {
                result = projectilePool[prefab.name].Dequeue();
                result.SetActive(false);
                result.SetActive(true);
                result.transform.position = position;
                result.transform.rotation = rotation;
            }

            projectilePool[prefab.name].Enqueue(result);
            return result;
        }
    }

#if UNITY_EDITOR
    [CanEditMultipleObjects]
    [CustomEditor(typeof(TrapLauncher), true)]
    public class TrapLauncherInspector : TrapMechanismInspector
    {
        const float SMALL_FIELD_WIDTH = 40;
        ReorderableList projectiles;


        protected override void OnInit()
        {
            var myTarget =(TrapLauncher)target;

            var prop = FindProperty("projectilePrefabs");
            projectiles = new ReorderableList(serializedObject, prop, true, true, true, true);
            projectiles.drawHeaderCallback = (Rect rect) =>
            {       
                GUI.Label(rect, "Projectile");
            };
            projectiles.drawElementCallback = (Rect rect, int index, bool isActive, bool isFocused) =>
            {
                var element = prop.GetArrayElementAtIndex(index);
                EditorGUI.PropertyField(rect, element, GUIContent.none);
            };

            AddHeader("Launcher", 1);

            AddProperty("force", new GUIContent("Force", "The force that is applied to the projectile."), 1);
            AddProperty("maxDistance", new GUIContent("Max Distance", "Projectile deactivates and returns to the pool after this distance even if it didn't collide with anything."), 1);
            AddProperty("ammunition", new GUIContent("Ammunition", "Limit how many times the launcher can shoot. 0 means it's not limited."), 1);
            AddProperty("projectileStickOnCollision", new GUIContent("Stick on collision", "The projectile will stick to and move with the object it collides. It disappears when the object pooler reuses it."), 1);

            AddHeader("Projectile", 2);

            AddProperty("projectilePoolSize", new GUIContent("Pool Size", "The script will instantiate only this amount of projectile from each prefab."), 2);
            AddProperty("randomProjectile", new GUIContent("Randomize", "Shoot a randomly selected projectile."), 2);  
            AddCustomField("Projectile Prefabs", projectiles.DoLayoutList, 2);            

            base.OnInit();
        }
    }
#endif
}
