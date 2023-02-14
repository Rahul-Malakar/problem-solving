ll n , m; cin >>n >> m;
   vll a(n) , b(n) , c(m); read(a,n); read(b,n); read(c,m);
   map<ll,vll> mpp , corr;
   ll cnt = 0;
   for(int i = 0 ; i < n ;i ++){
    corr[b[i]].pb(i);
    if(a[i] != b[i]){
        cnt++;
        mpp[b[i]].pb(i);
    }
   }
   vll ans;
   queue<ll> q;
   for(int i = 0 ; i < m ; i ++){
    if(mpp[c[i]].empty()){
        if(corr[c[i]].empty()){
            q.push(c[i]);
        }else{
            while(!q.empty()){
                ans.pb(corr[c[i]].back()+1);
                a[corr[c[i]].back()] = c[i];
                q.pop();
            }
            a[corr[c[i]].back()] = c[i];
            ans.pb(corr[c[i]].back()+1);
        }
    }else{
        while(!q.empty()){
            ans.pb(mpp[c[i]].back()+1);
            a[mpp[c[i]].back()] = c[i];
            q.pop();
        }
        ans.pb(mpp[c[i]].back()+1);
        a[mpp[c[i]].back()] = c[i];
        corr[c[i]].pb(mpp[c[i]].back());
        mpp[c[i]].pop_back();
    }
   }
   if(!q.empty() || a != b){
    cout << "NO" << endl;
    return;
   }
   cout << "YES" << endl;
   printv(ans)