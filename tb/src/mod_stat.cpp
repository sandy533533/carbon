#include "mod_stat.h"

////////////////////////////////////////////////////////
// Project： SystemC虚拟项目
// Module:   mod_stat
// Description: mod_stat 模块cpp文件
// Group：预研组
// Author: Newton
// Date: 2021.10.14 第一版
// Hierarchy : 编号，索引公共库
////////////////////////////////////////////////////////
mod_stat::mod_stat(sc_module_name name):
    sc_module(name)
{
    for (int i = 0; i < G_INTER_NUM; i++) {
        in_pkt_stat[i] = new sc_in<s_pkt_desc>();
    }
}
