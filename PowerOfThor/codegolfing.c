main(u,v,x,y,d,k){scanf("%d%d%d%d",&u,&v,&x,&y);d=0;for(char*c;;puts(c)){c=&d;c+=3;if(x!=u)k=x>u?2:0,*--c="E W"[k],x+=k-1;if(y!=v)k=y>v?2:0,*--c="S N"[k],y-=k-1;}}