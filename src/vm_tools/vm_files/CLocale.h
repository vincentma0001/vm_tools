// ================================================================================================ //
// ==                                                                                            == //
// ==                                         CLocale.h                                          == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Author               : v.m. ( vincent_ma0001@hotmail.com )                               == //
// ==   Version              : 1.0.0.0                                                           == //
// ==   Create Time          : 2020-10-15 09:03:31                                               == //
// ==   Modify Time          : 2020-11-11 16:10:06                                               == //
// ==   Issue  List          :                                                                   == //
// ==   Change List          :                                                                   == //
// ==     [    0.0.0.0     ] - Basic version                                                     == //
// ==                                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// ==                                                                                            == //
// ==   Copyright(c) : This file has copyrighted by v.m., the all right will been reserved!      == //
// ==                                                                                            == //
// ================================================================================================ //

#ifndef  __CLOCALE_H__
#define  __CLOCALE_H__


// ================================================================================================ //
// == Include files :                                                                            == //
// == ------------------------------------------------------------------------------------------ == //
// [ Include files ] {{{
#include <locale.h>
// }}}
// ================================================================================================ //


// ================================================================================================ //
// using namespace vm {{{
namespace vm
{

// ================================================================================================ //
// ==  Class CLocale : This class deal with c setlocale operation                                == //
// ------------------------------------------------------------------------------------------------ //
class CLocale
// {{{
{
// ------------------------------------------------------------------------------------------------ //
// Construct & Destruct : {{{
public:
    // Construct define
    inline          CLocale();
    // Destruct define
    inline virtual ~CLocale();

private:
    // Copy construct define
    inline CLocale( const CLocale &obj );
    // Assignment operation
    inline CLocale& operator = ( const CLocale &obj );
// }}} ! Construct & Destruct

// ------------------------------------------------------------------------------------------------ //
// Menbers   : {{{
private:
// }}} ! Members

// ------------------------------------------------------------------------------------------------ //
// Methods   : {{{
public:
    // Set locale mode:
    // Category : LC_ALL        - The entire locale.
    //            LC_COLLATE    - Affects the behavior of strcoll and strxfrm.
    //            LC_CTYPE      - Affects character handling functions (all functions of <cctype>, 
    //                            except isdigit and isxdigit), and the multibyte and wide character 
    //                            functions.
    //            LC_MONETARY   - Affects monetary formatting information returned by localeconv.
    //            LC_NUMERIC    - Affects the decimal-point character in formatted input/output operations 
    //                            and string formatting functions, as well as non-monetary information 
    //                            returned by localeconv.
    //            LC_TIME       - Affects the behavior of strftime.
    static inline char* Set ( const int ciCategory=LC_ALL, const char* const cpLocale=nullptr );
    static inline struct lconv* Conv(){ return localeconv(); }
    // Set locale zh_CN.utf-8
    static inline char* zh_CN      ( const int ciCategory=LC_ALL );
    static inline char* zh_CN_utf_8( const int ciCategory=LC_ALL );
    // Set locale en_US.utf-8
    static inline char* en_US      ( const int ciCategory=LC_ALL );
    // ISSUE : if has zh_cn, than set en_US.UTF-8, the sys can't be setting
    static inline char* en_US_utf_8( const int ciCategory=LC_ALL );
// }}} ! Methods

};
// }}} ! [ class CLocale ]
// ================================================================================================ /

}; 
// }}} End of namespace vm
// ================================================================================================ //
// Class realization :
#include "CLocale.h.inl"
// ================================================================================================ //

#endif // ! __CLOCALE_H__
// ================================================================================================ //
// == Note : 局域代码说明                                                                        == //
// ------------------------------------------------------------------------------------------------ //
// 区域性/语言名称   |  区域性标识符     |  区域性  {{{
// ------------------------------------------------------------------------------------------------ //
// ""（空字符串）       0x007F              固定区域性
// af                   0x0036              南非荷兰语
// af-ZA                0x0436              南非荷兰语（南非）
// sq                   0x001C              阿尔巴尼亚语
// sq-AL                0x041C              阿尔巴尼亚语（阿尔巴尼亚）
// ar                   0x0001              阿拉伯语
// ar-DZ                0x1401              阿拉伯语（阿尔及利亚）
// ar-BH                0x3C01              阿拉伯语（巴林）
// ar-EG                0x0C01              阿拉伯语（埃及）
// ar-IQ                0x0801              阿拉伯语（伊拉克）
// ar-JO                0x2C01              阿拉伯语（约旦）
// ar-KW                0x3401              阿拉伯语（科威特）
// ar-LB                0x3001              阿拉伯语（黎巴嫩）
// ar-LY                0x1001              阿拉伯语（利比亚）
// ar-MA                0x1801              阿拉伯语（摩洛哥）
// ar-OM                0x2001              阿拉伯语（阿曼）
// ar-QA                0x4001              阿拉伯语（卡塔尔）
// ar-SA                0x0401              阿拉伯语（沙特阿拉伯）
// ar-SY                0x2801              阿拉伯语（叙利亚）
// ar-TN                0x1C01              阿拉伯语（突尼斯）
// ar-AE                0x3801              阿拉伯语（阿联酋）
// ar-YE                0x2401              阿拉伯语（也门）
// hy                   0x002B              亚美尼亚语
// hy-AM                0x042B              亚美尼亚语（亚美尼亚）
// az                   0x002C              阿泽里语
// az-Cyrl-AZ           0x082C              阿泽里语（阿塞拜疆，西里尔语）
// az-Latn-AZ           0x042C              阿泽里语（阿塞拜疆，拉丁语）
// eu                   0x002D              巴斯克语
// eu-ES                0x042D              巴斯克语（巴斯克地区）
// be                   0x0023              白俄罗斯语
// be-BY                0x0423              白俄罗斯语（白俄罗斯）
// bg                   0x0002              保加利亚语
// bg-BG                0x0402              保加利亚语（保加利亚）
// ca                   0x0003              加泰罗尼亚语
// ca-ES                0x0403              加泰罗尼亚语（加泰罗尼亚地区）
// zh-HK                0x0C04              中文（香港特别行政区，中国）
// zh-MO                0x1404              中文（澳门特别行政区）
// zh-CN                0x0804              中文（中国）
// zh-Hans              0x0004              中文（简体）
// zh-SG                0x1004              中文（新加坡）
// zh-TW                0x0404              中文（台湾）
// zh-Hant              0x7C04              中文（繁体）
// hr                   0x001A              克罗地亚语
// hr-HR                0x041A              克罗地亚语（克罗地亚）
// cs                   0x0005              捷克语
// cs-CZ                0x0405              捷克语（捷克共和国）
// da                   0x0006              丹麦语
// da-DK                0x0406              丹麦语（丹麦）
// dv                   0x0065              迪维希语
// dv-MV                0x0465              迪维希语（马尔代夫）
// nl                   0x0013              荷兰语
// nl-BE                0x0813              荷兰语（比利时）
// nl-NL                0x0413              荷兰语（荷兰）
// en                   0x0009              英语
// en-AU                0x0C09              英语（澳大利亚）
// en-BZ                0x2809              英语（伯利兹）
// en-CA                0x1009              英语（加拿大）
// en-029               0x2409              英语（加勒比）
// en-IE                0x1809              英语（爱尔兰）
// en-JM                0x2009              英语（牙买加）
// en-NZ                0x1409              英语（新西兰）
// en-PH                0x3409              英语（菲律宾）
// en-ZA                0x1C09              英语（南非）
// en-TT                0x2C09              英语（特立尼达和多巴哥）
// en-GB                0x0809              英语（英国）
// en-US                0x0409              英语（美国）
// en-ZW                0x3009              英语（津巴布韦）
// et                   0x0025              爱沙尼亚语
// et-EE                0x0425              爱沙尼亚语（爱沙尼亚）
// fo                   0x0038              法罗语
// fo-FO                0x0438              法罗语（法罗群岛）
// fa                   0x0029              波斯语
// fa-IR                0x0429              波斯语（伊朗）
// fi                   0x000B              芬兰语
// fi-FI                0x040B              芬兰语（芬兰）
// fr                   0x000C              法语
// fr-BE                0x080C              法语（比利时）
// fr-CA                0x0C0C              法语（加拿大）
// fr-FR                0x040C              法语（法国）
// fr-LU                0x140C              法语（卢森堡）
// fr-MC                0x180C              法语（摩纳哥）
// fr-CH                0x100C              法语（瑞士）
// gl                   0x0056              加利西亚语
// gl-ES                0x0456              加利西亚语（西班牙）
// ka                   0x0037              格鲁吉亚语
// ka-GE                0x0437              格鲁吉亚语（格鲁吉亚）
// de                   0x0007              德语
// de-AT                0x0C07              德语（奥地利）
// de-DE                0x0407              德语（德国）
// de-LI                0x1407              德语（列支敦士登）
// de-LU                0x1007              德语（卢森堡）
// de-CH                0x0807              德语（瑞士）
// el                   0x0008              希腊语
// el-GR                0x0408              希腊语（希腊）
// gu                   0x0047              古吉拉特语
// gu-IN                0x0447              古吉拉特语（印度）
// he                   0x000D              希伯来语
// he-IL                0x040D              希伯来语（以色列）
// hi                   0x0039              印地语
// hi-IN                0x0439              印地语（印度）
// hu                   0x000E              匈牙利语
// hu-HU                0x040E              匈牙利语（匈牙利）
// is                   0x000F              冰岛语
// is-IS                0x040F              冰岛语（冰岛）
// id                   0x0021              印度尼西亚语
// id-ID                0x0421              印度尼西亚语（印度尼西亚）
// it                   0x0010              意大利语
// it-IT                0x0410              意大利语（意大利）
// it-CH                0x0810              意大利语（瑞士）
// ja                   0x0011              日语
// ja-JP                0x0411              日语（日本）
// kn                   0x004B              卡纳达语
// kn-IN                0x044B              卡纳达语（印度）
// kk                   0x003F              哈萨克语
// kk-KZ                0x043F              哈萨克语（哈萨克斯坦）
// kok                  0x0057              贡根语
// kok-IN               0x0457              贡根语（印度）
// ko                   0x0012              朝鲜语
// ko-KR                0x0412              朝鲜语（韩国）
// ky                   0x0040              吉尔吉斯语
// ky-KG                0x0440              吉尔吉斯语（吉尔吉斯坦）
// lv                   0x0026              拉脱维亚语
// lv-LV                0x0426              拉脱维亚语（拉脱维亚）
// lt                   0x0027              立陶宛语
// lt-LT                0x0427              立陶宛语（立陶宛）
// mk                   0x002F              马其顿语
// mk-MK                0x042F              马其顿语（马其顿，FYROM）
// ms                   0x003E              马来语
// ms-BN                0x083E              马来语（文莱达鲁萨兰）
// ms-MY                0x043E              马来语（马来西亚）
// mr                   0x004E              马拉地语
// mr-IN                0x044E              马拉地语（印度）
// mn                   0x0050              蒙古语
// mn-MN                0x0450              蒙古语（蒙古）
// no                   0x0014              挪威语
// nb-NO                0x0414              挪威语（伯克梅尔，挪威）
// nn-NO                0x0814              挪威语（尼诺斯克，挪威）
// pl                   0x0015              波兰语
// pl-PL                0x0415              波兰语（波兰）
// pt                   0x0016              葡萄牙语
// pt-BR                0x0416              葡萄牙语（巴西）
// pt-PT                0x0816              葡萄牙语（葡萄牙）
// pa                   0x0046              旁遮普语
// pa-IN                0x0446              旁遮普语（印度）
// ro                   0x0018              罗马尼亚语
// ro-RO                0x0418              罗马尼亚语（罗马尼亚）
// ru                   0x0019              俄语
// ru-RU                0x0419              俄语（俄罗斯）
// sa                   0x004F              梵语
// sa-IN                0x044F              梵语（印度）
// sr-Cyrl-CS           0x0C1A              塞尔维亚语（塞尔维亚，西里尔语）
// sr-Latn-CS           0x081A              塞尔维亚语（塞尔维亚，拉丁语）
// sk                   0x001B              斯洛伐克语
// sk-SK                0x041B              斯洛伐克语（斯洛伐克）
// sl                   0x0024              斯洛文尼亚语
// sl-SI                0x0424              斯洛文尼亚语（斯洛文尼亚）
// es                   0x000A              西班牙语
// es-AR                0x2C0A              西班牙语（阿根廷）
// es-BO                0x400A              西班牙语（玻利维亚）
// es-CL                0x340A              西班牙语（智利）
// es-CO                0x240A              西班牙语（哥伦比亚）
// es-CR                0x140A              西班牙语（哥斯达黎加）
// es-DO                0x1C0A              西班牙语（多米尼加共和国）
// es-EC                0x300A              西班牙语（厄瓜多尔）
// es-SV                0x440A              西班牙语（萨尔瓦多）
// es-GT                0x100A              西班牙语（危地马拉）
// es-HN                0x480A              西班牙语（洪都拉斯）
// es-MX                0x080A              西班牙语（墨西哥）
// es-NI                0x4C0A              西班牙语（尼加拉瓜）
// es-PA                0x180A              西班牙语（巴拿马）
// es-PY                0x3C0A              西班牙语（巴拉圭）
// es-PE                0x280A              西班牙（秘鲁）
// es-PR                0x500A              西班牙语（波多黎各）
// es-ES                0x0C0A              西班牙语（西班牙）
// es-UY                0x380A              西班牙语（乌拉圭）
// es-VE                0x200A              西班牙语（委内瑞拉）
// sw                   0x0041              斯瓦希里语
// sw-KE                0x0441              斯瓦希里语（肯尼亚）
// sv                   0x001D              瑞典语
// sv-FI                0x081D              瑞典语（芬兰）
// sv-SE                0x041D              瑞典语（瑞典）
// syr                  0x005A              叙利亚语
// syr-SY               0x045A              叙利亚语（叙利亚）
// ta                   0x0049              泰米尔语
// ta-IN                0x0449              泰米尔语（印度）
// tt                   0x0044              鞑靼语
// tt-RU                0x0444              鞑靼语（俄罗斯）
// te                   0x004A              泰卢固语
// te-IN                0x044A              泰卢固语（印度）
// th                   0x001E              泰语
// th-TH                0x041E              泰语（泰国）
// tr                   0x001F              土耳其语
// tr-TR                0x041F              土耳其语（土耳其）
// uk                   0x0022              乌克兰语
// uk-UA                0x0422              乌克兰语（乌克兰）
// ur                   0x0020              乌尔都语
// ur-PK                0x0420              乌尔都语（巴基斯坦）
// uz                   0x0043              乌兹别克语
// uz-Cyrl-UZ           0x0843              乌兹别克语（乌兹别克斯坦，西里尔语）
// uz-Latn-UZ           0x0443              乌兹别克语（乌兹别克斯坦，拉丁语）
// vi                   0x002A              越南语
// vi-VN                0x042A              越南语（越南）
// }}}
// ================================================================================================ //
// ==  Usage :                                                                                   == //
// == ------------------------------------------------------------------------------------------ == //
// [ Usage ] {{{ /*
// }}} */
// ================================================================================================ //
// ==                                        End of file                                         == //
// ================================================================================================ //
