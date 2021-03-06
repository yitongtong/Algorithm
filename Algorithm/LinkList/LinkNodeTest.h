//
//  LinkNodeTest.h
//  Algorithm
//
//  Created by zte's iMac on 2018/3/30.
//  Copyright © 2018年 zte's iMac. All rights reserved.
//

#ifndef LinkNodeTest_h
#define LinkNodeTest_h

#include <stdio.h>
#include "LinkNode.h"

// 创建一个长度为 len 的链表
single_link * create(unsigned int len);

void linkNodeTest(void);

/**
 创建一个长度为 len 的链表s
 single_link 节点的 value 值随机生成
 */
single_link * create(unsigned int len);

/**
 测试单链表是否有环
 */
void hasCicleTest(void);

/**
 测试单链表反转
 */
void reverseListTest(void);

/**
 测试合并两个有序单链表
 */
void mergeSortedListTest(void);

/**
 测试获取链表的倒数第 3 个节点
 */
void rGetKthNodeTest(void);

/**
 获取链表中间节点
 */
void getMiddleNodeTest(void);

/**
 测试判断两个单链表是否相交
 */
void isIntersectedTest(void);

/**
 获取两个单链表相交的第一个节点测试
 */
void getFirstCommonNodeTest(void);

/**
 测试已知一个单链表中存在环，求进入环中的第一个节点
 */
void getFitstNodeInCircleTest(void);

/**
 删除链表中的某个节点测试
 */
void deleteNodeTest(void);

#endif /* LinkNodeTest_h */
