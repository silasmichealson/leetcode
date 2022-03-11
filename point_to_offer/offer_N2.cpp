// /*
//  * @Descripttion: 
//  * @version: 
//  * @Author: silas
//  * @Date: 2022-03-01 20:57:15
//  * @LastEditors: silas
//  * @LastEditTime: 2022-03-01 21:14:07
//  */
// //实现单例模式 设计一个类我们只能生成该类的一个实例
// //sealed 在类上表示阻止其他类继承该类
// public sealed class singleton
// {
//     private singleton()
//     {
//     }
//     private static singleton instance = new singleton();
//     public static singleton instance
//     {
//         get
//         {
//             return instance;
//         }
//     }
// }