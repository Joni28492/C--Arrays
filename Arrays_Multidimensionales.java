/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author Alumno36
 */
public class Arrays_Multidimensionales {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        
        int matriz[][]= {{1,2},{3,4},{5,6}};
        System.out.println(matriz[2]);//coge la direcion de memoria de toda la fila 
        
         int matriz2[][]= {{1,2},{3,4,3,4,5},{1,5,6}}; //no coje basura
         
         int matriz3[][]=new int[3][4];
         
         int matriz4[][]=new int[3][];
        
         matriz4[0]=new int [5];//primera fila 5 col
         matriz4[1]=new int [8];//segunda fila 8 col
         
         
         for (int i = 0; i < matriz2.length; i++) {
             for (int j = 0; j < matriz2[i].length; j++) {//matriz2[i].length para la longitud de la columna
                 System.out.print(" "+ matriz2[i][j]);
             }
             
             System.out.println();
        }
         
         
         
         System.out.println("---------------");
         for(int[] fila : matriz2 ){//for mejorado
             
             for(int numero:fila){
                 System.out.print(" "+numero);
             }
             System.out.println("");
        }
         
         System.out.println("fila uno a 0");
         
         //long fila 1
         for (int columna = 0; columna < matriz2[1].length; columna++) {
            matriz2[1][columna]=0;
        }
         
         
         for(int[] fila : matriz2 ){//for mejorado
             
             for(int numero:fila){
                 System.out.print(" "+numero);
             }
             System.out.println("");
        }
         
         //matriz2[0]=matriz2[2];
         
         System.out.println("----------");
             for(int[] fila : matriz2 ){//for mejorado
             
             for(int numero:fila){
                 System.out.print(" "+numero);
             }
             System.out.println("");
        }
             
             
          matriz2[0][0]=matriz2[0][1];//copiar columna
          
           System.out.println("----------");
             for(int[] fila : matriz2 ){//for mejorado
             
             for(int numero:fila){
                 System.out.print(" "+numero);
             }
             System.out.println("");
        }
             
             
    }
    
}
