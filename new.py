file_name=input("Enter file name with extension:\t")
f=open(file_name,"w+")
if file_name.split('.')[-1] == "cpp":
    f.write("#include<iostream>\n#define REP(i,n) for(int i=0;i<n;i++)\n#define ll long long\n#define lli long long int\n#define endl \"\n\"\n#define IO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);\n#define FIO freopen(\"input.txt\",\"r\",stdin); freopen(\"output.txt\",\"w\",stdout)\n;using namespace std;\nint main(){\n\tIO;FIO;\n\n}")
    print("{} Created Successfully".format(file_name))
elif file_name=="py":
    pass
f.close()