#include<iostream>
using namespace std;
class life
{
    private:
          char kingdom[100];
          char cls[100];
          char phylum[100];
          int age_of_survival;
    public:
          void lifeline()
          {
              
             cout<<"Currently we show only Indian Species !!!!\n";
             cout<<"Enter the Kingdom to which the Species belong : \n";
             cin.getline(kingdom,100);
             cout<<"Enter the phylum of Species  : \n";
             cin.getline(phylum,100);
             cout<<"Enter the class of the Species : \n";
             cin.getline(cls,100);
            if(kingdom=="Animal")
             {
                if (phylum=="Vertebrate")
                 {
                       cout<<"Enter the Life Span of the organism (in Years)\n";
                      cin>>age_of_survival;
                      try
                      {
                         if(cls=="Crustaceans")
                             throw "Phylum is not matched please try again !!!\n";
                         else if (cls=="Arachnids")
                             throw "Phylum is not matched please try again !!!\n";
                          else if (cls=="Insects")
                             throw "Phylum is not matched please try again !!!\n";
                          else if (cls=="Myriapods")
                             throw "Phylum is not matched please try again !!!\n";
                      }
                     catch(const char *b)
                     {
                         cout<<b;
                     }
                    if(cls=="fish")
                    {
                          if(age_of_survival==10)
                              cout<<"Your Species is Rohu (Labeo Rohita)\n "<<"It is mainly found in the central and eastern India";
                          else if(age_of_survival==5)
                              cout<<"Your Species is Hilsa (Ilish Shad) \n"<<"It is mostly found at Bhagirathi-Hooghly component of ganga";
                          else if(age_of_survival >10 && age_of_survival< 20)
                              cout<<"Your Species is Tilapia (Cichlid Fish) \n"<<"It is mainly found at ganga river system ";
                         else if(age_of_survival==20)
                              cout<<"Your Species is Catla (Indian Carp) \n"<<"It is mainly found at northern India";
                        else if(age_of_survival==6)
                             cout<<"Your Species is Calbasu (Labeo Calbasu) \n"<<"It is mainly Found at Godavri River and krishna River";
                        else if(age_of_survival>=5&&age_of_survival<=8)
                             cout<<"Your Species is Karimeen (Green Chromide) \n"<<"It is mainly found at Kerala";
               
                    }
                    else if(cls=="Reptiles")
                    {
                          
                    }
                    else if(cls=="Amphibians")
                    {
                    
                    }
                    else if(cls=="Birds")
                    {
                        
               
                    }
                    else if(cls=="Mammals")
                    {
                     
               
                    }
           
                }
               else if(phylum=="Arthopods")
              {
                  try
                  {
                      if(cls=="Fish")
                        throw "Phylum is not matched please try again !!!\n";
                      else if(cls=="Amphibians")
                         throw "Phylum is not matched please try again !!!\n";
                      else if(cls=="Reptiles")
                         throw "Phylum is not matched please try again !!!\n";
                       else if(cls=="Birds")
                          throw "Phylum is not matched please try again !!!\n";
                       else if(cls=="Mammels")
                          throw "Phylum is not matched please try again !!!\n";
                 }
               catch(const char *d)
               {
                 cout<<d;
               }
               if(cls=="Crustaceans")
               {
                         

               }
               else if(cls=="Arachnids")
               {
                       

               }
              else if(cls=="Insects")
              {
               

              }
              else if(cls=="Myriapods")
              {
                     

              }
           }
            else if(phylum=="Annelids")
             {
                        

             }
            else if(phylum=="Molluscus")
             {
                        

             }
            else if(phylum=="Nematodes")
             {
                        
             }
         }
     }
};

int main()
{
    life l;
    l.lifeline();
return 0;
}
