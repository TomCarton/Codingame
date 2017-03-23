#include<iostream>
#define O(x)std::cout<<(x);
main(){int x,y,u,v;std::cin>>x>>y>>u>>v;for(;;){O(y>v?(v++,"S"):y<v?(v--,"N"):"")O(x>u?(u++,"E"):x<u?(u--,"W"):"")O("\n")}}
