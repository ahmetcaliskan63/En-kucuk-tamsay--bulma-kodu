#include <stdio.h>

 int
main ()
{
  
		 
		 
		int min, i, a;		//1 saniyede gerçekleþir
		//min, i ve a yý int olarak tanýmladýk.
		  int sayilar[a];//bir dizi oluþturdum ve int olarak tanýmladým.
		  
		 
		printf ("lutfen eleman sayisi giriniz\n");//n+1 saniyede gerçekleþir
		//burda da kulanýcýdan  eleman sayýsýný girilmesini istedim.
		  
		scanf ("%d", &a);//girilen sayýyý scanf ile aldým.
		  
		 
		for (i = 0; i < a; i++)	 //n saniyede gerçekleþir
		     //burda da diziyi for döngüsüne sokarak dizinin elemanýný belirliyoruz.
		    {
		      
		      printf ("%d. sayiyi giriniz : ", i + 1);	 //n saniyede gerçekleþir
		      //kulanýcýdan bir sayý girmesini istedim.
		      scanf ("%d", &sayilar[i]);	//n saniyede gerçekleþir
		      //girilen sayýyý scanf ile aldým.
		      
		 
		     min = sayilar[0];	//n saniyede gerçekleþir
		     //diziyi oluþturduk.
		    }
		  
		 
		for (i = 0; i < a; i++) //n+1 saniyede gerçekleþir
		     //burda da diziyi for döngüsüne sokarak dizinin elemanýný belirliyoruz.
		    {				
		      
		      if (min > sayilar[i])	//n saniyede gerçekleþir
			  min = sayilar[i];	//n saniyede gerçekleþir
			  //diziyi koþula sokarak en küçük sayýyý belirliyoruz.
		    }
		  
		 
		     printf ("Dizideki en kucuk sayi : %d", min);	//1 saniyede gerçekleþir
		     //burda da sonucu ekrana yazdýrýyoruz.
		     
		     
}

       // SONUC >==> T(n)=1+(n+1)+n+n+n+(n+1)+n+n++n1=8n+4


