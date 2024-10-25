#include <iostream>
#include <vector>
#include <random> 
std::random_device rd;
std::mt19937 gen(rd());
std::uniform_int_distribution<> dist(-100, 100);



//1

/*float mean(std::vector<float>x) {
    int k = x.size(); //����� �������(���������� �����)
    float summ = 0; // �����
    float l; //������� ��������������
    for (int i = 0; i < x.size();++i) {
        summ += x[i];
    }
    l = summ / k;
    return l;
}*/


//2
/*std::pair<float, float> minMax(std::vector<float> x) {
    float mn = x[0];  //����������� �������
    float mx = x[0];  //������������
    for (int i = 0; i < x.size();++i) {
        if (mn > x[i]) {  //���������� ��� �������� ���� � ������
            mn = x[i];
        }
        if (mx < x[i]) {
            mx = x[i];
        }
    }
    return { mn, mx };

}*/


//3

/*int argmax(std::vector<float> x) {
    int k;
    float mx = x[0]; //������������ ������
    if (x.size() != 0) {
        for (int i = 0; i < x.size(); ++i) {
            if (mx < x[i]) { //���������� �������� ���� � ������ � ������� �����������
                mx = x[i];
                k = i;
            }
        }
    }
    else {
        k = -1;
    }
    return k;


}*/

//4

/*void sort(std::vector<float>& x) {
    for (int i = 0; i < x.size()-1; ++i) {
        for (int j = 0; j < x.size()-1; ++j) {
            if (x[j] < x[j+1]) {
                float t = x[j]; //��������� ��������, ����� ����� �������� �������
                x[j] = x[j + 1];
                x[j + 1] = t;

            }
        }

    }
}*/

//5


/*bool remove_first_negative_element(std::vector<int>& x, int& removed_element) {
    for (int i = 0; i < x.size() - 1; ++i) {
        if (x[i] < 0) { // ���������, ������������� �� �������
            removed_element = x[i]; //��������� �������
            x.erase(x.begin() + i); // ������� ���
            return true;

        }
    }
    return false;
}*/

//6


/*std::string replace(const std::string& str, const std::string& old, const std::string& new_string) {
    std::string r = str; //����� �������� ������
    size_t pos = 0; //���������� ��� �������� ������� ��������� ������

    while ((pos = r.find(old, pos)) != std::string::npos) { //���� ��������� old �������, �� �������� �� new_string
        r.replace(pos, old.length(), new_string); //�������� ��������� ������
        pos += new_string.length(); // �������� ������� ��� ���������� ������
    }

    return r;
}

int main() {
    std::string S = replace("Can you can a can as a canner can can a can?", "can", "cAN");
    std::cout << S << std::endl;
    return 0;
}*/



//7

/*std::vector<std::string> split(const std::string& str, char sep) {
    std::vector<std::string> r; // ������ ��� �������� ������ ������
    int start = 0; // ��������� ������� ���������
    int end = 0;  // ������� ������� �����������

    while ((end = str.find(sep, start)) != std::string::npos) { //���� ������ sep ������� � ������� start
        if (end != start) { // ���� ������ �� ������, �� ��������� � ������
            r.push_back(str.substr(start, end - start)); //��������� ��������� ��������� � ������� start � ������ end - start
        }
        start = end + 1; // ��������� � ��� ������� 1 ��� ������ ��������� ���������
    }


    if (start < str.size()) {    // ��������� ��������� ���������, ���� ����� ���������� ����������� ���� �����
        r.push_back(str.substr(start));
    }

    return r;
}

int main() {
    std::vector<std::string> arr = split("Can you can a can as a canner can can a can?", ' ');
    for (const std::string& word : arr) {
        std::cout << word;
    }
    return 0;
}*/


//8

/*std::string join(const std::vector<std::string>& arr, const std::string& sep) {
    std::string r = arr[0]; //������ � ������� ��������� �������
    for (int i = 1; i < arr.size(); ++i) {
        r += sep + arr[i];
    }

    return r;
}

int main() {
    std::vector<std::string> arr = { "Can", "you", "can", "a", "can", "as", "a", "canner", "can", "can", "a", "can?" };
    std::string str = join(arr, " ");
    std::cout << str << std::endl;
    return 0;
}*/




/*int main() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dist(-100, 100);
    int n = 5;
    std::vector<int> r(n);

    std::vector<int>x = { 1,2,3,-7 };
    for (int i = 0; i < n; ++i) {
        r[i] = dist(gen);
        std::cout << r[i] << " ";
    }
    std::cout << " " << std::endl;
    int l;
    remove_first_negative_element(x, l);
    for (int i = 0; i < 4; ++i) {
        std::cout << x[i] << " ";
    }
    return 0;
}*/