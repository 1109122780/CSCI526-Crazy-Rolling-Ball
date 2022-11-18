Unity Depth Mask Shader

 by 
[@Doomlaser](https://twitter.com/Doomlaser)


This simple shader attached to a material is incredibly useful in @unity3d. Anything behind a mesh with it applied will be rendered invisible to your camera.

Combine with multiple cameras for cool masking tricks. Useful for creating fake holes in geometry, UI and AR applications.
 

Getting Started



1) Use primitives (Cylinders or Cubes) as Depth masks by adding them the DepthMask material.


2) Add the SetRendererQueue script to an object you wish to hide behind the mask. Set the queue to 2999 (3000 is normal geometry). In Play mode these objects will appear with a hole in them. 