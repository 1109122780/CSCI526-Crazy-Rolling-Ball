// 1. In your class, add a property:
// public GameObject information;
// 2. In your "void Start()" method, add a line:
// information = GameObject.Find("Information");
// 3. In the function where the player get one more star, add a line:
// information.GetComponent<InformationScript>().star++;
// 4. In the function where the play change the shape, add a line:
// information.GetComponent<InformationScript>().shapeChange++;