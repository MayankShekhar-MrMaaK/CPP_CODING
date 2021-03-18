#include <iostream>
#include <fstream>
#include <string>
#define IO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main(){
	IO;
	string filename;
	cout<<"Enter file name with extension"<<endl;
	cin>>filename;
	fstream my_file;
	my_file.open(filename, ios::out);
	if (!my_file)
		cout << "File not created!"<<endl;
	else {
		if(my_file){
			int index=filename.find("."),n=filename.size();
			string extension=filename.substr(index+1,filename.size()-1);
			if (extension.compare("cpp")==0){
				string p="#include<iostream>\n#define REP(i,n) for(int i=0;i<n;i++)\n#define ll long long\n#define lli long long int\n#define endl \"\n\"\n#define IO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);\n#define FIO freopen(\"input.txt\",\"r\",stdin); freopen(\"output.txt\",\"w\",stdout);\nusing namespace std;\nint main(){\n\tIO;FIO;\n\n}";
				my_file<<p;
				cout<<filename<<" created successfully.";
			}
			else if(extension.compare("py")==0){

			}
		}
		my_file.close(); 
	}
	return 0;
}