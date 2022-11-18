namespace Runemark.DeadlyDungeonTraps
{
    using System.Collections.Generic;
    using System.Linq;
    using UnityEngine;

    #if UNITY_EDITOR
    using UnityEditor;
    using UnityEditorInternal;
    #endif

    [AddComponentMenu("Deadly Dungeon Traps/Utility/Texture Mover", 0)]
    [HelpURL("https://runemarkstudio.com/deadly-dungeon-traps/documentation/trap/")]
    public class TextureMover : MonoBehaviour
    {
        [System.Serializable]public class State { public string stateName; public Vector2 offset; }
        public List<State> states = new List<State>();


        List<Renderer> renderers;

        void Awake()
        {
            renderers = GetComponentsInChildren<Renderer>().ToList();
        }

        public void SetState(string name)
        {
            var state = states.Find( x => string.Equals(x.stateName, name));
            renderers.ForEach(r => r.material.mainTextureOffset = state.offset);
        }
        public void ResetState()
        {
            renderers.ForEach(r => r.material.mainTextureOffset = states[0].offset);
        }
        
    }

    #if UNITY_EDITOR
    [CustomEditor(typeof(TextureMover))]
    public class TextureMoverInspector : CustomInspectorBase
    {
        ReorderableList states;

        protected override void OnInit()
        {
            TextureMover mytarget = (TextureMover)target;
           
            var prop = FindProperty("states");
            states = new ReorderableList(serializedObject, prop, true, true, true, true);
            states.drawHeaderCallback = (Rect rect) => 
            {               
                GUI.Label(rect, "States");
            };
            states.drawElementCallback = (Rect rect, int index, bool isActive, bool isFocused) => 
            {
                var element = prop.GetArrayElementAtIndex(index);
               
                var name = element.FindPropertyRelative("stateName");              
                var offset = element.FindPropertyRelative("offset");              
               
                EditorGUI.PropertyField(new Rect(rect.x, rect.y, rect.width / 2, rect.height), name, GUIContent.none);
                EditorGUI.PropertyField(new Rect(rect.x + rect.width / 2, rect.y, rect.width / 2, rect.height), offset, GUIContent.none);                     
            };
            AddCustomField("States", states.DoLayoutList);
        }
    }

#endif
}
