#include <iostream>
using namespace std;
#include <set>
#include <map>
int main()
{

    set<string> a;	//构造一个集合对象a, 内部的元素都是字符串string 
    a.insert("monkey");
    a.insert("dog");
    a.insert("cat");
    a.insert("ccat");
    a.insert("horse");	//会自动进行排序

    for (auto& s : a)
    {
        cout << s << " ";
    }
    cout << endl;

    set<string>::iterator  it = a.begin();
    cout << *it << endl;
    //*it = "kunkun";	//不能通过迭代器修改元素

    it++;
    it--;

    //返回擦除元素的下一个有效元素的迭代器
    it = a.erase(it);
    cout << *it << endl;

    a.insert("cat"); 	//不会导致迭代器失效
    cout << *it << endl;

    a.insert("kunkun");
    a.insert("pig");

    for (auto& s : a)
    {
        cout << s << " ";
    }
    cout << endl;

    cout << "-------------------------------------------------------" << endl;
    map<string, string> ssmap;  //实例化一个空对象
    cout << "size = " << ssmap.size() << endl;

    //插入 键值对
    // 对象名[键] = 值;
    ssmap["you"] = "你";    //[]里面的东西就是 键 

    //使用 {"me", "我"} 构造一个pair键值对 再插入到容器中 
    ssmap.insert({ "me", "我" });
    ssmap.insert(std::make_pair("hello", "你好"));
    ssmap.insert(pair<string, string>{ "world", "世界" });

    cout << "size = " << ssmap.size() << endl;

    //利用迭代器 打印
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


    //可以使用at()函数查找指定的键,返回键对应的值的引用
    string& res = ssmap.at("hello");
    cout << "ssmap.at( hello )  --  " << res << endl;

    res = "嗨";	//修改值 --> ssmap["hello"] = "嗨";

    for (auto& s : ssmap)
    {
        cout << s.first << "\t -- \t" << s.second << endl;
    }
    cout << "__________________" << endl << endl;
}