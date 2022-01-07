void linkdelete(struct Node  *head, int M, int N)
    {
        //Add code here   
        Node*p=head;
        int m,n;
        while(p){
            m =M;
            while(m-->1 && p){

                p=p->next;
            }
            
            n =N;
            while((n--)!=0 && p){
                Node*k=p->next;
                if(k)p->next=k->next;
                if(k)delete k;
            }
            if(p)p=p->next;
        }
    }
