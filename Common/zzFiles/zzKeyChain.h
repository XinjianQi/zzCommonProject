//
//  zzKeyChain.h
//  zzProject
//
//  Created by zz on 14-9-2.
//  Copyright (c) 2014年 YunFeng. All rights reserved.
//  Security.framework
//  用法同NSUserDefault

#import <Foundation/Foundation.h>

@interface zzKeyChain : NSObject

+(id)objectForKey:(NSString*)key;

+(void)setObject:(id)obj forKey:(NSString*)key;

+(void)deleteKey;
@end
