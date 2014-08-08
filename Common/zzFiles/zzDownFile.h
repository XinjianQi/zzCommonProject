//
//  zzDownFile.h
//  51QiPei
//
//  Created by zz on 14-8-7.
//  Copyright (c) 2014年 YunFeng. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol zzDownFileDelegate <NSObject>

@optional
-(void)ReturnFileSize:(int)tag length:(long long)length;
-(void)ReturnDownSize:(int)tag length:(long long)length;
-(void)ReturnSucess:(int)tag filePath:(NSString*)filePath;
-(void)ReturnError:(int)tag msg:(NSString*)msg;

@end

@interface zzDownFile : NSObject<zzDownFileDelegate,NSURLConnectionDelegate,NSURLConnectionDataDelegate>

@property (strong,nonatomic) id delegate;
@property (assign,nonatomic) int tag;
@property (strong,nonatomic) NSString *fileUrl;
@property (strong,nonatomic) NSString *savePath;

@property (nonatomic,retain) NSMutableData *connectionData;
-(id)initWith:(int)tag  fileUrl:(NSString*)fileUrl  savePath:(NSString*)savePath;
-(void)start;
@end
