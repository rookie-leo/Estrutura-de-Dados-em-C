void bsort (int v[ ],int qtd){
     int i, j;
     int aux;
     for (i=1;i<qtd;i++){
//p/ i=1 => 1<5 => V  
//p/ i=2 => 2<5 => V  	
          for (j=0;j<qtd-i;j++){
    //p/i=1 => j=0;0<5-1 => V
    		// j=1;1<5-1 => V
    		// j=2;2<5-1 => V
    		// j=3;3<5-1 => V
    		// j=4;4<5-1 => F
               if (v[j]>v[j+1]){
        //p/i=1 => v[0]>v[0+1]=46>39 => V
        		// v[1]>v[1+1]=46>55 => F
        		// v[2]>v[2+1]=55>14 => V
        		// v[3]>v[3+1]=55>27 => V
                     aux=v[j];
        //p/i=1 => aux=v[0]=46
        		// aux=v[2]=55
        		// aux=v[3]=55
                     v[j]=v[j+1];
        //p/i=1 => v[0]=v[0+1]=39
                // v[2]=v[2+1]=14 
                // v[3]=v[3+1]=27
                     v[j+1]=aux;
        //p/i=1 => v[0+1]=46
                // v[2+1]=55
                // v[3+1]=55
               }
        //p/i=1       //j++=> j=0+1=1
        			 //j++=> j=1+1=2
        			 //j++=> j=2+1=3
        			  //j++=> j=3+1=4
          }
        //i++ => i=1+1=2
     }
}
