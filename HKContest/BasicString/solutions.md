## Bài 1: Đếm từ

### Lời giải:

Mỗi lần có dấu cách là thêm một từ mới $\rightarrow$ duyệt qua xâu, mỗi lần gặp dấu cách thì biến $count$ (ban đầu là 1) sẽ tăng thêm 1.

Chú ý trường hợp giả sử xâu input có dấu cách ở đầu, có nhiều dấu cách giữa 2 từ hoặc xâu rỗng.

### Code:   

```cpp
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    int wc=1;
    for(int i=0;i<s.length();i++){
    	if(isspace(s[i])){
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

Duyệt xâu, khi gặp một chữ số thì $tmp$*$=10$ và thêm chữ số. Nếu không gặp chữ số thì cộng $tmp$ vào $ans$ và đặt $tmp = 0$.

### Code:

```cpp
#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	getline(cin,s);
	int ans=0,tmp=0;
	for(int i=0;i<s.length();i++){
		if(isdigit(s[i])){
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
#include<bits/stdc++.h>
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
Dùng `std:hex` (trong thư viện `<ios>`) và in ra. Cách này thực hiện được cũng do đáp án nằm trong khoảng `long long`. 
```cpp
#include<bits/stdc++.h>
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

Xóa các phần tử dấu cách ở đầu.
Chạy for; nếu gặp dấu cách, nếu kí tự tiếp theo là dấu cách thì xóa kí tự đó. Lưu ý lùi i đi 1. Đặt 1 biến bool ban đầu true; nếu biến là true thì kí tự được viết hoa và biến = false, còn lại kí tự được viết thường.

### Code:   

```cpp
#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	getline(cin,s);
	bool opening=true;
	while(isspace(s[0])){
		s.erase(0,1);
	}
	for(int i=0;i<s.length();i++){
		if(isspace(s[i])){
			opening=true;
			if(isspace(s[i+1])){
				s.erase(i+1,1);
				i--;
			}
			continue;
		}
		if(opening){
			s[i]=toupper(s[i]);
			opening=false;
		}
		else{
			s[i]=tolower(s[i]);
		}
	}
	cout<<s;
    return 0;
}
```

## Bài 5: Tách tên

### Lời giải:

Chạy for, nếu gặp dấu cách thì in kí tự xuống dòng, nếu không in ra kí tự tiếp theo.

### Code:

```cpp
#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	getline(cin,s);
	for(int i=0;i<s.length();i++){
		if(isspace(s[i])){
			cout<<endl;
		}
		else cout<<s[i];
	}
    return 0;
}
```

## Bài 6: Tách tên

### Lời giải:
Cách 1:
Quy đổi mỗi bộ 3 chữ số nhị phân thành 1 chữ số bát phân.
Nếu độ dài dãy nhị phân là số không chia hết cho 3 thì thêm 1 hoặc chữ số 0 ở đầu để thỏa mãn.
Với mỗi bộ 3 chữ số, nhân mỗi chữ số với 2^(thứ tự từ phải qua trái bắt đầu từ 0): số thứ 1 nhân 4, số thứ 2 nhân 2 và số thứ 3 giữ nguyên.

### Code:

```cpp
#include<bits/stdc++.h>
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
	for(int i=0;i<s.length();i+=3){        ans+=to_string(4*(s[i]-'0')+2*(s[i+1]-'0')+(s[i+2]-'0'));
	}
	cout<<ans;
    return 0;
}
```

Cách 2 (CHỈ ÁP DỤNG VỚI TEST NHỎ):

Quy đổi dãy nhị phân về số thập phân và chuyển sang bát phân (có thể dùng std::oct trong <ios>)
Quy đổi nhị phân về thập phân tương tự bài TLPTP, mỗi chữ số nhị phân nhân với biến tạm ứng với 2^(vị trí chữ số)
Tuy nhiên, cách này không khả thi do giới hạn của đáp án vượt quá giới hạn long long

```cpp
#include<bits/stdc++.h>
using namespace std;


int main(){
	string s;
	cin>>s;
	string ans="";
	long long dec=0,tmp=1;
	for(int i=s.length()-1;i>=0;i--){
		dec+=(s[i]-'0')*tmp;
		tmp*=2;
	}
	cout<<oct<<dec;
     return 0;
}
```

## Bài 7: Kí tự khác nhau

### Lời giải:

Đặt 1 mảng lưu việc xuất hiện của các chữ cái và chữ số.
Chạy for, nếu là chữ cái/chữ số thì phần tử tương ứng trong mảng = true.
(ở đây phần tử 1-26 là chữ cái và 27-36 là chữ số)

### Code:

```cpp
#include<bits/stdc++.h>
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
Kiểm tra kí tự thứ i có bằng kí tự vị trí đối xứng (độ dài xâu - i); nếu khác thì in 0 và dừng chương trình.
Chú ý xâu bắt đầu từ 0: thay vì s.length()-i thì để s.length()-i-1.
Chạy for i từ 0 đến s.length()/2 đảm bảo cả trường hợp độ dài xâu lẻ hay chẵn do phép chia số nguyên luôn làm tròn xuống -> không duyệt phần tử chính giữa nếu xâu có độ dài lẻ.

### Code:

```cpp
#include<bits/stdc++.h>
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

## Bài 10: Đếm xâu

## Bài 11: Xâu ghép

## Bài 12: Nhị phân - Mười sáu
