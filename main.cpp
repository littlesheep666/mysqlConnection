#include <iostream>
#include "MysqlConn.h"

int main() {
    MysqlConn * conn = new MysqlConn();
    // connect Mysql
    conn->ConnectMysql();

    // 查询
    const char* Msg = "";
    const char *SQL = "SELECT * FROM user";
    string str = conn->SelectData(SQL,4);

    if( str.length() > 0 ){
        printf("select successful \n");
        printf("%s",str.data());
        printf("\n");
    }
    else
    {
        printf("%s",Msg);
    }

    conn->FreeConnect();
}
