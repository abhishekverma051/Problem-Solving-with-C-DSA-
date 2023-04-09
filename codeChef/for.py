pp tet; 
    cin >> tet; 
    while(tet--){ 
        pp oyo=1, nanu; 
    if(oyo!=1) 
    { 
        pp jiju=-1; 
    } 
    else 
    {cin>>nanu; 
    } 
     
vector <pp> z(nanu); 
    vector <pp> x(nanu); 
     
 
    for(pp i = 0; i < nanu; i++) cin >> x[i]; 
  sort(x.begin(),x.end()); 
 for(pp i = 0; i < nanu; i++) cin >> z[i]; 
 
     
    sort(z.begin(),z.end()); 
 
    vector <pp> we; 
     
     
    for(pp i = nanu/2; i < nanu; i++) we.push_back(z[i]); 
    y= we; 
    we.clear(); 
    for(pp i = nanu/2; i < nanu; i++) we.push_back(z[i]); 
    x= we; 
 
    n = x.size(); 
    vector <pp> ciity; 
    for(ll i = 0; i < nanu; i++){ 
        ciity.push_back(x[i] + z[n-1-i]); 
    } 
    sort(ciity.begin(),ciity.end()); 
    cout << ciity[0] << endl; 
    } 
    return 0; 
}