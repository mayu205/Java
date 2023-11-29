class Demo
{
    public int A;
    public final int B;
    Demo()
    {
        A = 11;
        B= 21;
    }
    Demo(int i ,int j )
    {
        A = i;
        B = j;
    }
}
public class final1 {
    public static void main(String args[])
    {
        Demo dobj = new Demo();
        System.out.println(dobj.A);
        System.out.println(dobj.B);
        dobj.A++;
        //dobj.B++;  //error 


        Demo dobj2 = new Demo(51 , 101);
        System.out.println(dobj2.A);
        System.out.println(dobj2.B);
    }
}
