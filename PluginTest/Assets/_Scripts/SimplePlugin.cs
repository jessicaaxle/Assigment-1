using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Runtime.InteropServices;
public class SimplePlugin : MonoBehaviour
{
    const string DLL_NAME = "SIMPLEPLUGIN";
    [DllImport(DLL_NAME)]
   private static extern int SimpleFunction();
    [DllImport(DLL_NAME)]
    private static extern void ReadInto(float x, float y, float z);
    [DllImport(DLL_NAME)]
    private static extern float ReadOut(int j);
   //private static extern int aTest();
   
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.O))
        {
          // Debug.Log(SimpleFunction());
        }
        if (Input.GetKeyDown(KeyCode.S))
        {
            ReadInto(transform.position.x, transform.position.y, transform.position.z);
        }
        if (Input.GetKeyDown(KeyCode.T))
        {
            transform.position = new Vector3(ReadOut(0), ReadOut(1), ReadOut(2));
        }
        if (Input.GetKey(KeyCode.UpArrow))
        {
            transform.Translate(Vector3.forward * Time.deltaTime);
        }
        if (Input.GetKey(KeyCode.DownArrow))
        {
            transform.Translate(Vector3.back * Time.deltaTime);
        }
        if (Input.GetKey(KeyCode.LeftArrow))
        {
            transform.Translate(Vector3.left * Time.deltaTime);
        }
        if (Input.GetKey(KeyCode.RightArrow))
        {
            transform.Translate(Vector3.right * Time.deltaTime);
        }

    }
}