#include<stdio.h>
#include<string.h>

int bikes(); //it is use to select bikes
int accessories();  // it is use to select accessories
int billing(int price,char *tp[40],char *product[40]);

int main()
{
    int b,n,cc,mp,mt,m,d,mp_rpm,mt_rpm,price;
    printf("press key to select any of the below");
    printf("\n");
    printf("1.Bikes");
    printf("\n");
    printf("2.accessories");
    printf("\n Select the above option:-");
    scanf("%d",&n);
    printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------");
    printf("\n");
    switch(n)
    {
        case 1:
               printf("\n");
               m=1;
               bikes();
               printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------");
               printf("\n");
               break;
        case 2:
               printf("\n");
               m=2;
               accessories();
               printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------");
               printf("\n");
               break;
        default:printf("select any of the one given above");
               break;
    }
   return 0; 
}

int bikes()
{
    int b,n,cc,mp,mt,m,d,mp_rpm,mt_rpm,b_price;
    char *tp[40],type[40],ans[40],*product[40];
    //b=bike,n=number,cc=bike cc,mp=max power,mt=max torque,b_price=bike price,mp_rpm=max power at rpm,mt_rpm=max torque at rpm,
    //tp=model name,type=bike or acc,ans=ans of you want to buy bike or not,product=model name
    //here you can select the model of bike 
    printf("\n1.Diavel");
    printf("\n2.XDiavel");
    printf("\n3.Hypermotard");
    printf("\n4.Monster");
    printf("\n5.Multistrada");
    printf("\n6.panigale");
    printf("\n7.Supersport");
    printf("\nselect any one of the above:-");
    scanf("%d",&b);
    printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------");
    switch (b)  
    {
    case 1:*tp="Diavel";
           printf("\n1.Diavel 1260");
           printf("\n");
           printf("2.diavel 1260 S");
           scanf("%d",&d);
           switch (d)
           {
           case 1:*product="Diavel 1260";
                  b_price=1770000;
                  cc=1262;
                  mp=154.6;
                  mp_rpm=9500; 
                  mt=129;
                  mt_rpm=7500;
                  printf("price=%d",b_price);
                  printf("\ncc=%d",cc);
                  printf("\nmax power=%dbhp @ %drpm",mp,mp_rpm);
                  printf("\nmax Torque=%dNm @ %drpm",mt,mt_rpm);
                  printf("\n----------------------------------------------------------------------------------------------------------------------------------------------");
                  printf("\n");
                  
                  printf("would you like to buy this product:");
                  scanf("%s",&ans);
                  if(strcmp(ans,"yes")==0)
                  {
                         billing(b_price,tp,product);
                         return 0;
                  }
               break;
            case 2:*product="Diavel 1260 S";
                  b_price=2070000;
                  cc=1262;
                  mp=154.6;
                  mp_rpm=9500; 
                  mt=129;
                  mt_rpm=7500;
                  printf("price=%d",b_price);
                  printf("\ncc=%d",cc);
                  printf("\nmax power=%dbhp @ %drpm",mp,mp_rpm);
                  printf("\nmax Torque=%dNm @ %drpm",mt,mt_rpm);
                  printf("\n");
                   printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------");
                   printf("\n");
                  printf("would you like to buy this product:");
                  scanf("%s",&ans);
                 if(strcmp(ans,"yes")==0)
                  {
                         billing(b_price,tp,product);
                         return 0;
                  }
                  break;
           default:printf("select any of the one given above");
               break;
           }
        break;
    case 2:*tp="XDiavel";
           printf("\n1.XDiavel");
           printf("\n2.XDiavel S");
           printf("\n Select the above option:-");
           scanf("%d",&d);
           switch (d)
           {
           case 1:*product="XDiavel";
                  b_price=1653000;
                  cc=1262;
                  mp=153.8;
                  mp_rpm=9500; 
                  mt=128.9;
                  mt_rpm=5000;
                  printf("price=%d",b_price);
                  printf("\ncc=%d",cc);
                  printf("\nmax power=%dbhp @ %drpm",mp,mp_rpm);
                  printf("\nmax Torque=%dNm @ %drpm",mt,mt_rpm);
                  printf("\n");
                   printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------");
                   printf("\n");
                  printf("would you like to buy this product:");
                  scanf("%s",&ans);
                  if(strcmp(ans,"yes")==0)
                  {
                         billing(b_price,tp,product);
                         return 0;
                  }
               break;
            case 2:*product="XDiavel S";
                  b_price=1899000;
                  cc=1262;
                  mp=152.8;
                  mp_rpm=9500; 
                  mt=128.9;
                  mt_rpm=5000;
                  printf("price=%d",b_price);
                  printf("\ncc=%d",cc);
                  printf("\nmax power=%dbhp @ %drpm",mp,mp_rpm);
                  printf("\nmax Torque=%dNm @ %drpm",mt,mt_rpm);
                  printf("\n");
                   printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------");
                   printf("\n");
                  printf("would you like to buy this product:");
                  scanf("%s",&ans);
                  if(strcmp(ans,"yes")==0)
                  {
                         billing(b_price,tp,product);
                         return 0;
                  }
                  break;
           default:printf("select any of the one given above");
               break;
           }
        break;
    case 3:*tp="Hypermotard";
           printf("1.950");
           printf("\n Select the above option:-");
           scanf("%d",&d);
           switch (d)
           {
            case 1:*product="950";
                  b_price=1199000;
                  cc=937;
                  mp=111;
                  mp_rpm=95000; 
                  mt=96;
                  mt_rpm=7250;
                  printf("price=%d",b_price);
                  printf("\ncc=%d",cc);
                  printf("\nmax power=%dbhp @ %drpm",mp,mp_rpm);
                  printf("\nmax Torque=%dNm @ %drpm",mt,mt_rpm);
                  printf("\n");
                   printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------");
                   printf("\n");
                  printf("would you like to buy this product:");
                  scanf("%s",&ans);
                  if(strcmp(ans,"yes")==0)
                  {
                         billing(b_price,tp,product);
                         return 0;
                  }
               break;
           }
    case 4:*tp="Monster";
           printf("1.797");
           printf("2.821");
           printf("\n Select the above option:-");
           scanf("%d",&d);
           switch (d)
           {
           case 1:*product="797";
                  b_price=808000;
                  cc=803;
                  mp=75;
                  mp_rpm=8250; 
                  mt=69;
                  mt_rpm=5750;
                  printf("price=%d",b_price);
                  printf("\ncc=%d",cc);
                  printf("\nmax power=%dbhp @ %drpm",mp,mp_rpm);
                  printf("\nmax Torque=%dNm @ %drpm",mt,mt_rpm);
                  printf("\n");
                   printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------");
                   printf("\n");
                  printf("would you like to buy this product:");
                  scanf("%s",&ans);
                  if(strcmp(ans,"yes")==0)
                  {
                         billing(b_price,tp,product);
                         return 0;
                  }
               break;
            case 2:*product="821";
                  b_price=1899000;
                  cc=821;
                  mp=107;
                  mp_rpm=9250; 
                  mt=86;
                  mt_rpm=7750;
                  printf("price=%d",b_price);
                  printf("\ncc=%d",cc);
                  printf("\nmax power=%dbhp @ %drpm",mp,mp_rpm);
                  printf("\nmax Torque=%dNm @ %drpm",mt,mt_rpm);
                  printf("\n");
                   printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------");
                   printf("\n");
                  printf("would you like to buy this product:");
                  scanf("%s",&ans);
                  if(strcmp(ans,"yes")==0)
                  {
                         billing(b_price,tp,product);
                         return 0;
                  }

                  break;
           default:printf("select any of the one given above");
               break;
           }
    case 5:*tp="Multistrada";
           printf("1.950");
           printf("\n2.1260");
           printf("\n3.1260 S");
           printf("\n4.1260 pikes peak");
           printf("\n5.Multistrada 1260 enduro");
           printf("\n Select the above option:-");
           scanf("%d",&d);
            printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------");
            printf("\n");
           switch (d)
           {
           case 1:*product="950";
                  b_price=1284000;
                  cc=937;
                  mp=111;
                  mp_rpm=9000; 
                  mt=96.2;
                  mt_rpm=7750;
                  printf("price=%d",b_price);
                  printf("\ncc=%d",cc);
                  printf("\nmax power=%dbhp @ %drpm",mp,mp_rpm);
                  printf("\nmax Torque=%dNm @ %drpm",mt,mt_rpm);
                  printf("\n");
                   printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------");
                   printf("\n");
                  printf("would you like to buy this product:");
                  scanf("%s",&ans);
                  if(strcmp(ans,"yes")==0)
                  {
                        billing(b_price,tp,product);
                         return 0;
                  }
                  break;
            case 2:*product="1260";
                  b_price=1770000;
                  cc=1262;
                  mp=154.6;
                  mp_rpm=9500; 
                  mt=129;
                  mt_rpm=7500;
                  printf("price=%d",b_price);
                  printf("\ncc=%d",cc);
                  printf("\nmax power=%dbhp @ %drpm",mp,mp_rpm);
                  printf("\nmax Torque=%dNm @ %drpm",mt,mt_rpm);
                  printf("\n");
                   printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------");
                   printf("\n");
                  printf("would you like to buy this product:");
                  scanf("%s",&ans);
                  if(strcmp(ans,"yes")==0)
                  {
                         billing(b_price,tp,product);
                         return 0;
                  }
                  break;
            case 3:*product="1260 S";
                  b_price=1950000;
                  cc=1262;
                  mp=154.6;
                  mp_rpm=9500; 
                  mt=129;
                  mt_rpm=7500;
                  printf("price=%d",b_price);
                  printf("\ncc=%d",cc);
                  printf("\nmax power=%dbhp @ %drpm",mp,mp_rpm);
                  printf("\nmax Torque=%dNm @ %drpm",mt,mt_rpm);
                  printf("\n");
                   printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------");
                   printf("\n");
                  printf("would you like to buy this product:");
                  scanf("%s",&ans);
                  if(strcmp(ans,"yes")==0)
                  {
                         billing(b_price,tp,product);
                         return 0;
                  }
                  break;
            case 4:*product="1260 pikes peak";
                  b_price=2069000;
                  cc=1198.4;
                  mp=157.8;
                  mp_rpm=9500; 
                  mt=136;
                  mt_rpm=7500;
                  printf("price=%d",b_price);
                  printf("\ncc=%d",cc);
                  printf("\nmax power=%dbhp @ %drpm",mp,mp_rpm);
                  printf("\nmax Torque=%dNm @ %drpm",mt,mt_rpm);
                  printf("\n");
                   printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------");
                   printf("\n");
                  printf("would you like to buy this product:");
                  scanf("%s",&ans);
                  if(strcmp(ans,"yes")==0)
                  {
                         billing(b_price,tp,product);
                         return 0;
                  }
                  break;
            case 5:*product="Multistrada 1260 enduro";
                  b_price=1999000;
                  cc=1262;
                  mp=153.8;
                  mp_rpm=9500; 
                  mt=128;
                  mt_rpm=7500;
                  printf("price=%d",b_price);
                  printf("\ncc=%d",cc);
                  printf("\nmax power=%dbhp @ %drpm",mp,mp_rpm);
                  printf("\nmax Torque=%dNm @ %drpm",mt,mt_rpm);
                  printf("\n");
                   printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------");
                   printf("\n");
                  printf("would you like to buy this product:");
                  scanf("%s",&ans);
                  if(strcmp(ans,"yes")==0)
                  {
                         billing(b_price,tp,product);
                         return 0;
                  }
                  break;
            default:printf("select any of the one given above");
                  break;
           }
    case 6:*tp="panigale";
           printf("\nm1.959");
           printf("\n2.1299 R final edition");
           printf("\n3.Panigale V4 S");
           printf("\n4.Panigale V4 Speciale");
           printf("\n5.Panigale V4 R");
           printf("\n6.Panigale V4 25° Anniversario 916");
           printf("\n Select the above option:-");
           scanf("%d",&d);
            printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------");
            printf("\n");
           
           switch (d)
            {
                case 1:*product="959";
                       b_price=1530000;
                       cc=955;
                       mp=154.85;
                       mp_rpm=10500; 
                       mt=107.4;
                       mt_rpm=9000;
                       printf("price=%d",b_price);
                       printf("\ncc=%d",cc);
                       printf("\nmax power=%dbhp @ %drpm",mp,mp_rpm);
                       printf("\nmax Torque=%dNm @ %drpm",mt,mt_rpm);
                       printf("\n");
                        printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------");
                   printf("\n");
                       printf("would you like to buy this product:");
                       scanf("%s",&ans);
                       if(strcmp(ans,"yes")==0)
                       {
                         billing(b_price,tp,product);
                         return 0;
                       }
                       break;
                case 2:*product="1299 R final edition";
                       b_price=5182000;
                       cc=1299;
                       mp=142;
                       mp_rpm=9000; 
                       mt=209.4;
                       mt_rpm=11000;
                       printf("price=%d",b_price);
                       printf("\ncc=%d",cc);
                       printf("\nmax power=%dbhp @ %drpm",mp,mp_rpm);
                       printf("\nmax Torque=%dNm @ %drpm",mt,mt_rpm);
                       printf("\n");
                        printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------");
                   printf("\n");
                       printf("would you like to buy this product:");
                       scanf("%s",&ans);
                       if(strcmp(ans,"yes")==0)
                       {
                         billing(b_price,tp,product);
                         return 0;
                       }
                       break;
                case 3:*product="Panigale V4 S";
                       b_price=2650000;
                       cc=1103;
                       mp=211;
                       mp_rpm=13000; 
                       mt=124;
                       mt_rpm=10000;
                       printf("price=%d",b_price);
                       printf("\ncc=%d",cc);
                       printf("\nmax power=%dbhp @ %drpm",mp,mp_rpm);
                       printf("\nmax Torque=%dNm @ %drpm",mt,mt_rpm);
                       printf("\n");
                        printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------");
                   printf("\n");
                       printf("would you like to buy this product:");
                       scanf("%s",&ans);
                       if(strcmp(ans,"yes")==0)
                       {
                         billing(b_price,tp,product);
                         return 0;
                       }
                       break;
                
                 case 4:*product="Panigale V4 Speciale";
                       b_price=2650000;
                       cc=1103;
                       mp=211;
                       mp_rpm=13000; 
                       mt=124;
                       mt_rpm=10000;
                       printf("price=%d",b_price);
                       printf("\ncc=%d",cc);
                       printf("\nmax power=%dbhp @ %drpm",mp,mp_rpm);
                       printf("\nmax Torque=%dNm @ %drpm",mt,mt_rpm);
                       printf("\n");
                        printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------");
                   printf("\n");
                       printf("would you like to buy this product:");
                       scanf("%s",&ans);
                       if(strcmp(ans,"yes")==0)
                       {
                         billing(b_price,tp,product);
                         return 0;
                       }
                       break;
                 case 5:*product="Panigale V4 R";
                       b_price=5187000;
                       cc=1103;
                       mp=211;
                       mp_rpm=13000; 
                       mt=124;
                       mt_rpm=10000;
                       printf("price=%d",b_price);
                       printf("\ncc=%d",cc);
                       printf("\nmax power=%dbhp @ %drpm",mp,mp_rpm);
                       printf("\nmax Torque=%dNm @ %drpm",mt,mt_rpm);
                       printf("\n");
                        printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------");
                   printf("\n");
                       printf("would you like to buy this product:");
                       scanf("%s",&ans);
                       if(strcmp(ans,"yes")==0)
                       {
                         billing(b_price,tp,product);
                         return 0;
                       }
                       break;
           
                 case 6:*product="Panigale V4 25° Anniversario 916";
                       b_price=2057000;
                       cc=1103;
                       mp=211;
                       mp_rpm=13000; 
                       mt=124;
                       mt_rpm=10000;
                       printf("price=%d",b_price);
                       printf("\ncc=%d",cc);
                       printf("\nmax power=%dbhp @ %drpm",mp,mp_rpm);
                       printf("\nmax Torque=%dNm @ %drpm",mt,mt_rpm);
                       printf("\n");
                        printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------");
                   printf("\n");
                       printf("would you like to buy this product:");
                       scanf("%s",&ans);
                       if(strcmp(ans,"yes")==0)
                       {
                         billing(b_price,tp,product);
                         return 0;
                       }
                       break;
                default:printf("select any of the one given above");
                       break;
            }
       case 7:*tp="Supersports";
            printf("\n1.Supersport");
           printf("\n2.Supersport S");
           printf("\n Select the above option:-");
           scanf("%d",&d);
           switch (d)
           {
           case 1:*product="Supersport";
                  b_price=1300000;
                  cc=937;
                  mp=109.8;
                  mp_rpm=9000; 
                  mt=96.7;
                  mt_rpm=6500;
                  printf("price=%d",b_price);
                  printf("\ncc=%d",cc);
                  printf("\nmax power=%dbhp @ %drpm",mp,mp_rpm);
                  printf("\nmax Torque=%dNm @ %drpm",mt,mt_rpm);
                  printf("\n");
                   printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------");
                   printf("\n");
                  printf("would you like to buy this product:");
                  scanf("%s",&ans);
                  if(strcmp(ans,"yes")==0)
                  {
                         billing(b_price,tp,product);
                         return 0;
                  }
               break;
            case 2:*product="Supersport S";
                  b_price=1400000;
                  cc=937;
                  mp=109.8;
                  mp_rpm=9000; 
                  mt=96.7;
                  mt_rpm=6500;
                  printf("price=%d",b_price);
                  printf("\ncc=%d",cc);
                  printf("\nmax power=%dbhp @ %drpm",mp,mp_rpm);
                  printf("\nmax Torque=%dNm @ %drpm",mt,mt_rpm);
                  printf("\n");
                   printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------");
                   printf("\n");
                  printf("would you like to buy this product:");
                  scanf("%s",&ans);
                  if(strcmp(ans,"yes")==0)
                  {
                         billing(b_price,tp,product);
                         return 0;
                  }
                  break;
           default:printf("select any of the one given above");
               break;
           }
    default:
        break;
    }
    return 0;
}


int accessories() //it is use top select the accessories
{
       int a,c,a_price;
       char *product[40],*type[40],ans[40];
       //a=what u want to buy,c=model name,a_price=accessories price
       //product=product name,type=type of product bike or accessories,ans=ans of u want to buy or not
       printf("\n1.Riding Jacket");
       printf("\n2.Riding Gloves");
       printf("\n3.Riding Boots");
       printf("\n Select the above option:-");
       scanf("%d",&a);
       switch (a)
       {
       case 1:printf("\n1.Ducati Corse C4");
              printf("\n2.Speed Evo C1");
              printf("\n3.Company C3Ducati Corse C4  ");
              printf("\n4.Ducati 77");
              printf("\n Select the above option:-");
              scanf("%d",&c);
               printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------");
                   printf("\n");
              
              switch (c)
              {
              case 1:*type="Riding_Jacket";
                     *product="Ducati Corse C4";
                     a_price=45000;
                     printf("type=%s",*type);
                     printf("\n");
                     printf("product=%s",*product);
                     printf("\n");
                     printf("price=%d",a_price);
                     printf("\n");
                      printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------");
                   printf("\n");
                     printf("would you like to buy this product:");
                     scanf("%s",&ans);
                     if(strcmp(ans,"yes")==0)
                     {
                         billing(a_price,type,product);
                         return 0;
                     }
                     break;
              case 2:*type="Riding_Jacket";
                     *product="Speed Evo C1";
                     a_price=63500;
                     printf("type=%s",type);
                     printf("product=%s",product);
                     printf("\n");
                     printf("price=%d",a_price);
                     printf("\n");
                      printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------");
                   printf("\n");
                     printf("would you like to buy this product:");
                     scanf("%s",&ans);
                     if(strcmp(ans,"yes")==0)
                     {
                         billing(a_price,type,product);
                         return 0;
                     }

                     break;
              case 3:*type="Riding_Jacket";
                     *product="Company C3";
                     a_price=42801;
                     printf("type=%s",type);
                     printf("product=%s",product);
                     printf("\n");
                     printf("price=%d",a_price);
                     printf("\n");
                      printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------");
                   printf("\n");
                     printf("would you like to buy this product:");
                      scanf("%s",&ans);
                     if(strcmp(ans,"yes")==0)
                     {
                         billing(a_price,type,product);
                         return 0;
                     }
                     break;
              case 4:*type="Riding_Jacket";
                     *product="Ducati 77";
                     a_price=52355;
                     printf("type=%s",type);
                     printf("product=%s",product);
                     printf("\n");
                     printf("price=%d",a_price);
                     printf("\n");
                      printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------");
                   printf("\n");
                     printf("would you like to buy this product:");
                      scanf("%s",&ans);
                     if(strcmp(ans,"yes")==0)
                     {
                         billing(a_price,type,product);
                         return 0;
                     }
                     break;
              default:printf("please select from the above option");
                     break;
              }
              break;
       case 2:printf("\n1.Strada C4");
              printf("\n2.Speed Evo C1");
              printf("\n3.Speed Air C1  ");
              printf("\n4.Ducati Corse C3 ");
              printf("\n Select the above option:-");
              scanf("%d",&c);
               printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------");
                   printf("\n");
              
              switch (c)
              {
              case 1:*type="Riding_Gloves";
                     *product="Strada C4";
                     a_price=28022;
                     printf("type=%s",type);
                     printf("\n");
                     printf("product=%s",product);
                     printf("\n");
                     printf("price=%d",a_price);
                     printf("\n");
                      printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------");
                   printf("\n");
                      printf("would you like to buy this product:");
                      scanf("%s",&ans);
                      if(strcmp(ans,"yes")==0)
                      {
                         billing(a_price,type,product);
                         return 0;
                      }
                     break;
              case 2:*type="Riding_Gloves";
                     *product="Speed Evo C1";
                     a_price=20139;
                     printf("type=%s",type);
                     printf("\n");
                     printf("product=%s",product);
                     printf("\n");
                     printf("price=%d",a_price);
                     printf("\n");
                      printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------");
                   printf("\n");
                     printf("would you like to buy this product:");
                      scanf("%s",&ans);
                     if(strcmp(ans,"yes")==0)
                     {
                          billing(a_price,type,product);
                         return 0;
                     }
                     break;
              case 3:*type="Riding_Gloves";
                     *product="Speed Air C1 ";
                     a_price=13604;
                     printf("type=%s",type);
                     printf("\n");
                     printf("product=%s",product);
                     printf("\n");
                     printf("price=%d",a_price);
                     printf("\n");
                      printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------");
                   printf("\n");
                     printf("would you like to buy this product:");
                     scanf("%s",&ans);
                     if(strcmp(ans,"yes")==0)
                     {
                         billing(a_price,type,product);
                         return 0;
                     }
                     break;
              case 4:*type="Riding_Gloves";
                     *product="Ducati Corse C3 ";
                     a_price=27744;
                     printf("\ntype=%s",type);
                     printf("\n");
                     printf("type=%c",type);
                     printf("\nproduct=%s",product);
                     printf("\n");
                     printf("price=%d",a_price);
                     printf("\n");
                      printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------");
                   printf("\n");
                     printf("would you like to buy this product:");
                     scanf("%s",&ans);
                     if(strcmp(ans,"yes")==0)
                     {
                         billing(a_price,type,product);
                         return 0;
                      }
                     break;
              default:printf("please select from the above option");
                     break;
              }
              break;
       case 3:printf("\n1.Ducati Corse V5 Air");
              printf("\n2.Atacama WP C1 ");
              printf("\n3.Ducati All Terrain  ");
              printf("\n Select the above option:-");
              scanf("%d",&c);
               printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------");
                   printf("\n");
              
              switch (c)
              {
              case 1:*type="Riding_Boots";
                     *product="Ducati Corse V5 Air ";
                     a_price=43183;
                     printf("type=%s",type);
                     printf("\n");
                     printf("product=%s",product);
                     printf("\n");
                     printf("price=%d",a_price);
                     printf("\n");
                      printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------");
                   printf("\n");
                     printf("would you like to buy this product:");
                     scanf("%s",&ans);
                     if(strcmp(ans,"yes")==0)
                     {
                         billing(a_price,type,product);
                         return 0;
                     }
                     break;
              case 2:*type="Riding_Boots";
                     *product="Atacama WP C1";
                     a_price=34011;
                     printf("type=%s",type);
                     printf("\n");
                     printf("product=%s",product);
                     printf("\n");
                     printf("price=%d",a_price);
                     printf("\n");
                      printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------");
                   printf("\n");
                     printf("would you like to buy this product:");
                     scanf("%s",&ans);
                     if(strcmp(ans,"yes")==0)
                     {
                         billing(a_price,type,product);
                         return 0;
                     }
                     break;
              case 3:*type="Riding_Boots";
                     *product="Ducati All Terrain  ";
                     a_price=47740;
                     printf("type=%s",type);
                     printf("\n");
                     printf("product=%s",product);
                     printf("\n");
                     printf("price=%d",a_price);
                     printf("\n");
                      printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------");
                   printf("\n");
                     printf("would you like to buy this product:");
                     scanf("%s",&ans);
                     if(strcmp(ans,"yes")==0)
                      {
                         billing(a_price,type,product);
                         return 0;
                     }
                     break;
              default:printf("please select from the above option");
                     break;
              }
              break;
       default:printf("please select from the above option");
              break;
       }
       return 0;
}

int billing(int price,char *tp[40],char *product[40])//this function is used for billing
{
       char customer_name[40],type[40],product_type[40],product_name[40];
       char mobile[10];
       //type=type of product you want to buy,mobile=mobile number of customer
       printf("\nEnter customer name:");
       scanf("%s",&customer_name);
       printf("\nEnter customer mobile number:");
       scanf("%s",&mobile);
       printf("\nEnter type of product(bike or accessories):");
       scanf("%s",&type);
       if(strcmp(type,"bike")==0)
       {
      printf("-----------------------------------------------------------------------------------------------------------------------------");
       printf("                                                              DUCATI                                                                                 ");
       printf("\n");
       printf("Customer Name:%s                                                                  Mobile Number:%s",customer_name,mobile);
       printf("\n");
       printf("type=%s",type);
       printf("\n");
       printf("Product Type:%s %s",*tp,*product);
       printf("\n");
       printf("Price:%d",price);
       printf("\n");
     printf("-----------------------------------------------------------------------------------------------------------------------------");
       printf("\n");
       printf("Ducati Delhi");
       printf("\n");
       printf("Plot No. 13, Sector 37, Pace City 1,Near BBT ");
       printf("\n");
       printf("Gurgaon Haryana, 122001, India ");
       printf("\n");
        printf("-----------------------------------------------------------------------------------------------------------------------------");
       }
       else
       {
       printf("-----------------------------------------------------------------------------------------------------------------------------");
       printf("                                                              DUCATI                                                                                 ");
       printf("\n");
       printf("Customer Name:%s                                                                  Mobile Number:%s",customer_name,mobile);
       printf("\n");
       printf("type=%s",type);
       printf("\n");
       printf("Product Type:%s %s",*tp,*product);
       printf("\n");
       printf("Price:%d",price);
       printf("\n");
        printf("-----------------------------------------------------------------------------------------------------------------------------");
       printf("\n");
       printf("Ducati Delhi");
       printf("\n");
       printf("Plot No. 13, Sector 37, Pace City 1,Near BBT ");
       printf("\n");
       printf("Gurgaon Haryana, 122001, India ");
       printf("\n");
        printf("-----------------------------------------------------------------------------------------------------------------------------");
       }
       return 0;
}
