

//Algo
/*
        iterate in array such that
                in the beginning subarray is of length 1;

                when ever we get bigger value when new element is added to the sub array 
                        swap it till it is bigger then the previous value
*/

public class S4_InsertionSort {
        static int [] InsertionSort(int arr[]){
                int temp;
                for (int i = 1; i < arr.length; i++) {
                        for (int j = 0; j <= i; j++) {
                                if(arr[j]>=arr[i]){
                                        temp = arr[j];
                                        arr[j] = arr[i];
                                        arr[i] = temp;
                                }
                        }
                }
                System.out.println("hurrr");
                return arr;
        }
        public static void main(String[] args) {
                int [] arr = {12,22,222,31,4,2323};
                InsertionSort(arr);
                for (int i = 0; i < arr.length; i++) {
                        System.out.println(arr[i]);
                }
        }
}


/*

Tum Agar Manaoge Toh Maan Jaunga
Main Tere Bulane Pe kabhi bhi aaunga
Har Safar Mein Sath Tera
Main Yun Hi Nibhaunga

Kabhi tumhe yaad meri aaye;
palkon se zulf hata lena;
Saaf dikhunga tumko wahin ;
jo na dikhu to batadenA;

kabhi mere paas jo tum aao;
aankon se aanke mila lena;
tum hi dikhoge inn me mere;
jo na dikho to saza dena.

haath me haath ho tera mere 
Baahon me mujhko jakad lenA
Dil ko mere na samajh aata 
bin dekhe guzaara wo har lamha

Tum kabhi bhi aankon me nami na le aana
Main tere sirhane pe khudko bithaunga

Abhi to the pehli baar mile;
mann me mere thaa kuch aaaya;
Jane kab din ye hazar gaye;
fir bhi na sab mai keh paya;
 */