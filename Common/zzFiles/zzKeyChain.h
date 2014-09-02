//
//  zzKeyChain.h
//  zzProject
//
//  Created by zz on 14-9-2.
//  Copyright (c) 2014年 YunFeng. All rights reserved.
//  Security.framework

#import <Foundation/Foundation.h>

@interface zzKeyChain : NSObject
+ (NSMutableDictionary *)getKeychainQuery:(NSString *)service;

+ (void)save:(NSString *)service data:(id)data;

+ (id)load:(NSString *)service;

+ (void)delete:(NSString *)service;
@end
