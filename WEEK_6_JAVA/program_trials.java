class StaticDemo
{
   static int x;
   int y=100;
   
   static
   {
      System.out.println("Hello Good Morning");
   }
   
   static void setd(int x1)
   { 
      x=x1; 
	  System.out.println("Inside setd x="+x);
	  //System.out.println("y="+y);
   }
   
   void nonstatic()
   {
	   System.out.println("Inside nonstatic x="+x);
	   System.out.println("Inside nonstatic y="+y);
   }
   
   static
   {
      System.out.println("Inside Static Block");
   }
}

class StaticDemo1
{
   static int m=0,n=0;
    public static void main(String ss[])
    {
        int m=10,x=20;
        {
           int n=30;
           System.out.println("m+n= "+(m+n));

        }
        x=m+n;
        System.out.println(n);
        System.out.println("x= "+x);


	}  
}
