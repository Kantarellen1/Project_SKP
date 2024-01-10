[System.AttributeUsage(System.AttributeTargets.Methods, Inherited=false)]
public sealed class DLLImportAttribute: Attribute

using System;
using System.Runtime.InteropServices;
class TestTransfer{
        [DLLImport("user32.dll", Charset = Charset.Unicode)]
        public static extern int Messagebox(IntPtr hWnd, String text, String caption, uint type);

        static void Main()
        {
            Messagebox(new IntPtr(0), "Hello World!", "Hello Dialog", 0);
        }

}