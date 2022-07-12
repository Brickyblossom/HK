## Bài 1: Đếm từ

### Lời giải:

Mỗi lần có dấu cách là thêm một từ mới $\rightarrow$ duyệt qua xâu, mỗi lần gặp dấu cách thì biến $count$ (ban đầu là 1) sẽ tăng thêm 1.

Chú ý trường hợp giả sử xâu input có dấu cách ở đầu, có nhiều dấu cách giữa 2 từ hoặc xâu rỗng.

### Code:   

```cpp
#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    int wc=1;
    for(int i=0;i<s.length()-1;i++){
    	if(s[i]==' '&&s[i+1]!=' '){
    	    wc++;
	    }
    }
    cout<<wc;
    return 0;
}
```

## Bài 2: Tính tổng

### Lời giải:

Đặt 1 biến tạm $tmp = 0$ và biến đáp án $ans = 0$.

Duyệt xâu, khi gặp một chữ số thì $tmp$ *$=10$ và thêm chữ số. Nếu không gặp chữ số thì cộng $tmp$ vào $ans$ và đặt $tmp = 0$.

### Code:

```cpp
#include<iostream>
#include<string>
using namespace std;

int main(){
	string s;
	getline(cin,s);
	int ans=0,tmp=0;
	for(int i=0;i<s.length();i++){
		if('0'<=s[i]&&s[i]<='9'){
            tmp=tmp*10+(s[i]-'0');
		}
		else{
			if(tmp!=0){
				ans+=tmp;
				tmp=0;
			}
		}
	}
	cout<<ans;
    return 0;
}
```

## Bài 3: Thập lục phân - Thập phân

### Lời giải:

#### Cách 1:

**Chú ý**:

Hệ thập lục phân bao gồm các chữ số $0-9$ và $6$ chữ cái $A-F$ ứng với các số $10-15$ trong hệ thập phân.
Mỗi chữ số $x$ có thứ tự $y$ trong một số đếm theo hệ thập lục phân (đếm từ $0$ từ phải sang trái) có giá trị là $x*16^y$. Ví dụ:

$1A = 1*16^1+A*16^0 = 1*16+10*1=26$.

Do theo giới hạn đề bài $(0 \le |S| < 16)$ đáp án không vượt quá giới hạn `long long` ($FFFFFFFFFFFFFFF=1152921504606846975<2^{63}$), nên ta đặt biến tạm $tmp=1$ ứng với giá trị $16^y$, biến đáp án $ans=0$.

Duyệt xâu chữ số, cộng $ans$ với chữ số * $tmp$, $tmp$ *$=16$.

### Code:

```cpp
#include<iostream>
#include<string>
using namespace std;

int main(){
	string s;
	getline(cin,s);
	long long ans=0,tmp=1;
	for(int i=s.length()-1;i>=0;i--){
		if(isdigit(s[i])){
			ans=ans+((long long)(s[i]-'0'))*tmp;
		}
		else{
			ans=ans+((long long)s[i]-55)*tmp;
		}
		tmp=tmp*16;
	}
	cout<<ans;
    return 0;
}
```

#### Cách 2:
Nhập vào số dùng `std::hex` (trong thư viện `<ios>`; số nhập vào sẽ được tự động đánh dấu là dạng thập lục phân và lưu dưới dạng thập phân) và in ra. Cách này thực hiện được cũng do đáp án nằm trong khoảng `long long`. 
```cpp
#include<iostream>
#include<string>
#include<ios>
using namespace std;

int main(){
	long long a;
	cin>>hex>>a;
	cout<<a<<endl;
    return 0;
}
```

## Bài 4: Chuẩn hóa tên

### Lời giải:

Bỏ qua các dấu cách ở đầu và dấu cách thừa (các dấu cách nằm ngay sau một dấu cách). Đặt 1 biến `bool` $opening = true$; nếu biến là $true$ thì kí tự được viết hoa và gán biến bằng $false$, còn lại kí tự được viết thường.

### Code:   

```cpp
#include<iostream>
#include<string>
using namespace std;

int main(){
	string s,t="";
	getline(cin,s);
	bool opening=true;
	int i=0;
	while(s[i]==' '){
		i++;
	}
	for(;i<s.length();i++){
		if(s[i]==' '){
			t+=' ';
			opening=true;
			if(s[i+1]==' '){
				i++;
			}
			continue;
		}
		else if(opening){
			t+=toupper(s[i]);
			opening=false;
		}
		else{
			t+=tolower(s[i]);
		}
	}
	cout<<t;
    return 0;
}
```

## Bài 5: Tách tên

### Lời giải:

Duyệt xâu, nếu gặp dấu cách thì in kí tự xuống dòng, nếu không in ra kí tự tiếp theo.

### Code:

```cpp
#include<iostream>
#include<string>
using namespace std;

int main(){
	string s;
	getline(cin,s);
	for(int i=0;i<s.length();i++){
		if(s[i]==' '){
			cout<<endl;
		}
		else cout<<s[i];
	}
    return 0;
}
```

## Bài 6: Nhị phân - Bát phân

### Lời giải:

Quy đổi mỗi bộ $3$ chữ số nhị phân thành $1$ chữ số bát phân.
Nếu độ dài dãy nhị phân là số không chia hết cho $3$ thì thêm các chữ số $0$ ở đầu để thỏa mãn.


Với mỗi bộ 3 chữ số, nhân mỗi chữ số với $2^x$ (với $x$ là thứ tự từ phải qua trái bắt đầu từ $0$): số thứ 1 nhân $4$, số thứ 2 nhân $2$ và số thứ 3 giữ nguyên.

### Code:

```cpp
#include<iostream>
#include<string>
using namespace std;


int main(){
	string s;
	cin>>s;
	string ans="";
	if(s.length()%3==1){
		s="00"+s;
	}
	else if(s.length()%3==2){
		s="0"+s;
	}
	for(int i=0;i<s.length();i+=3){
    	ans+=to_string(4*(s[i]-'0')+2*(s[i+1]-'0')+(s[i+2]-'0'));
	}
	cout<<ans;
    return 0;
}
```

## Bài 7: Kí tự khác nhau

### Lời giải:

Đặt một mảng lưu việc xuất hiện của các chữ cái và chữ số.

Duyệt xâu, nếu là chữ cái/chữ số thì phần tử tương ứng trong mảng = true.
(ở đây phần tử 1-26 là chữ cái và 27-36 là chữ số)

### Code:

```cpp
#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main(){
	string s;
	getline(cin,s);
	bool appear[37];
	for(int i=1;i<37;i++){
		appear[i]=false;
	}
	for(int i=0;i<s.length();i++){
		if(isalpha(s[i])){
			appear[tolower(s[i])-96]=true;
		}
		if(isdigit(s[i])){
			appear[s[i]-21]=true;
		}
	}
	int ans=0;
	for(int i=1;i<37;i++){
		if(appear[i])ans++;
	}
	cout<<ans;
    return 0;
}
```

## Bài 8: Đối xứng

### Lời giải:
Kiểm tra kí tự thứ $i$ có bằng kí tự vị trí đối xứng $length - i -1$ (với $length$ là độ dài xâu) ; nếu khác thì in $0$ và dừng chương trình (chú ý xâu bắt đầu từ $0$).

Duyệt xâu với $i$ từ $0$ đến $\frac{length}{2}$ đảm bảo cả trường hợp độ dài xâu lẻ hay chẵn do phép chia số nguyên luôn làm tròn xuống $\rightarrow$ không duyệt phần tử chính giữa nếu xâu có độ dài lẻ.

### Code:

```cpp
#include<iostream>
#include<string>
using namespace std;

int main(){
	string s;
	getline(cin,s);
	for(int i=0;i<s.length()/2;i++){
		if(s[i]!=s[s.length()-1-i]){
			cout<<0;
			return 0;
		}
	}
	cout<<1;
    return 0;
}
```

## Bài 9: Mười sáu - Nhị phân

### Lời giải:
Tương tự bài Nhị phân - Bát phân, mỗi chữ số trong hệ thập lục phân tương ứng với $4$ chữ số nhị phân.

Chú ý bỏ qua các chữ số $0$ ở đầu.

### Code:
```cpp
#include<iostream>
#include<string>
using namespace std;

int main(){
	string s,ans="";
	cin>>s;
	for(int i=0;i<s.length();i++){
		int tmp=((s[i]<='F'&&s[i]>='A')?s[i]-55:s[i]-'0');
		string t="";
		for(int j=0;j<4;j++){
			t+=(tmp%2+'0');
			tmp/=2;
		}
		for(int j=t.length()-1;j>=0;j--){
            ans+=t[j];
        }
	}
    int i=0;
	while(ans[i]=='0')i++;
    for(;i<=ans.length();i++){
        cout<<ans[i];
    }
    return 0;
}
```

## Bài 10: Đếm xâu

### Lời giải:
Để kiểm tra số lần xuất hiện một xâu $S_1$ trong xâu $S_2$, ta kiểm tra với mọi kí tự của $S_2$ có trùng với kí tự đầu tiên của $S_1$ không. Nếu có, tiếp tục xét kí tự tiếp theo của $S_2$ với kí tự thứ 2 của $S_1$, và tiếp tục như thế đến khi hết độ dài của 1 trong 2 xâu hoặc gặp vị trì mà kí tự của 2 xâu khác nhau. Nếu tìm được một lần xuất hiện xâu $S_1$ trong $S_2$ thì tăng biến đếm $cnt$ lên 1 và thêm vị trí xuất hiện kí tự đầu tiên trên của $S_1$ vào mảng đếm.

### Code:
```cpp
#include<iostream>
#include<string>
using namespace std;

int main(){
    string s1,s2;
    cin>>s1>>s2;
    int cnt=0;
    int appear[300];
    for(int i=0;i<s2.length();i++){
        int tmp=0;
        int k=i;
        for(int j=0;j<s1.length(),k<s2.length();j++){
            if(s2[k]==s1[j]){
            	tmp++;
            	k++;
            }
            else break;
        }
        if(tmp==s1.length()){
            appear[cnt++]=i+1;
        }
    }
    cout<<cnt<<endl;
    for(int i=0;i<cnt;i++){
        cout<<appear[i]<<" ";
    }
}
```

## Bài 11: Xâu ghép

### Lời giải:
Để lấy độ dài lớn nhất ta chạy for từ độ dài lớn nhất có thể của xâu con là $n/2$ về $1$. Với mỗi độ dài xét xem xâu con hiện tại có trùng với xâu đầu tiên không bằng cách xét mọi vị trí $j$ và $j\%i$ với $i$ là độ dài đang xét.

### Code:
```cpp
#include<iostream>
#include<string>
using namespace std;

int main(){
	string s;
	getline(cin,s);
	long long n=s.length();
	for(int i=n/2;i>1;i--){
		bool chk=true;
		for(int j=i;j<n;j++){
			if(s[j]!=s[j%i]){
				chk=false;
				break;
			}
		}
		if(chk){
			cout<<s.substr(0,i)<<endl;
			return 0;
		}
	}
	cout<<0;
    return 0;
}
```

## Bài 12: Nhị phân - Mười sáu

### Lời giải:
Tương tự bài Mười sáu - Nhị phân. Mỗi $4$ chữ số nhị phân tương ứng với một chữ số thập lục phân.

### Code:
```cpp
#include<iostream>
#include<string>
using namespace std;

int main(){
	string s,ans="";
	cin>>s;
	for(int i=1;i<=(s.length()%4);i++){
		s='0'+s;
	}
	for(int i=0;i<s.length();i+=4){
		int tmp=0,cnt=1;
		for(int j=0;j<4;j++){
			tmp+=(s[i+3-j]-'0')*cnt;
			cnt*=2;
		}
		ans+=char((tmp<10)?(tmp+'0'):(tmp+55));
	}
	cout<<ans<<endl;
    return 0;
}
```
