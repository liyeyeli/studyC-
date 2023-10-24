#include <iostream>
using namespace std;
#include <set>
#include <map>
int main()
{

    set<string> a;	//����һ�����϶���a, �ڲ���Ԫ�ض����ַ���string 
    a.insert("monkey");
    a.insert("dog");
    a.insert("cat");
    a.insert("ccat");
    a.insert("horse");	//���Զ���������

    for (auto& s : a)
    {
        cout << s << " ";
    }
    cout << endl;

    set<string>::iterator  it = a.begin();
    cout << *it << endl;
    //*it = "kunkun";	//����ͨ���������޸�Ԫ��

    it++;
    it--;

    //���ز���Ԫ�ص���һ����ЧԪ�صĵ�����
    it = a.erase(it);
    cout << *it << endl;

    a.insert("cat"); 	//���ᵼ�µ�����ʧЧ
    cout << *it << endl;

    a.insert("kunkun");
    a.insert("pig");

    for (auto& s : a)
    {
        cout << s << " ";
    }
    cout << endl;

    cout << "-------------------------------------------------------" << endl;
    map<string, string> ssmap;  //ʵ����һ���ն���
    cout << "size = " << ssmap.size() << endl;

    //���� ��ֵ��
    // ������[��] = ֵ;
    ssmap["you"] = "��";    //[]����Ķ������� �� 

    //ʹ�� {"me", "��"} ����һ��pair��ֵ�� �ٲ��뵽������ 
    ssmap.insert({ "me", "��" });
    ssmap.insert(std::make_pair("hello", "���"));
    ssmap.insert(pair<string, string>{ "world", "����" });

    cout << "size = " << ssmap.size() << endl;

    //���õ����� ��ӡ
    for (auto it = ssmap.begin(); it != ssmap.end(); ++it)
    {
        //cout << (*it).first << " -- " << (*it).second << endl;
        cout << it->first << " -- " << it->second << endl;
    }
    cout << "__________________" << endl << endl;

    map<string, int> simap;
    simap["zhangs"] = 1001;
    simap["lisi"] = 1002;
    simap["wangwu"] = 1003;
    for (auto& s : simap)
    {
        cout << s.first << "\t -- \t" << s.second << endl;
    }
    cout << "__________________" << endl << endl;


    //����ʹ��at()��������ָ���ļ�,���ؼ���Ӧ��ֵ������
    string& res = ssmap.at("hello");
    cout << "ssmap.at( hello )  --  " << res << endl;

    res = "��";	//�޸�ֵ --> ssmap["hello"] = "��";

    for (auto& s : ssmap)
    {
        cout << s.first << "\t -- \t" << s.second << endl;
    }
    cout << "__________________" << endl << endl;
}