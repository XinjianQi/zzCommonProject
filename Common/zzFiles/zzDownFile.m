//
//  zzDownFile.m
//  51QiPei
//
//  Created by zz on 14-8-7.
//  Copyright (c) 2014年 YunFeng. All rights reserved.
//

#import "zzDownFile.h"

@implementation zzDownFile


-(id)initWith:(int)tag  fileUrl:(NSString*)fileUrl  savePath:(NSString*)savePath
{
    self = [super init];
    if(self)
    {
        self.tag = tag;
        self.fileUrl = fileUrl;
        self.savePath = savePath;
    }
    return self;
}

-(void)start
{
    NSLog(@"异步%@",self.fileUrl);
    NSError *err;
    //定义url
    //构建NSURL
    NSURL *fileUrl=[NSURL URLWithString:self.fileUrl];
    //构建nsurlrequest
    NSURLRequest *request=[[NSURLRequest alloc]initWithURL:fileUrl cachePolicy:NSURLRequestReloadIgnoringCacheData timeoutInterval: 100.0];
    //建立连接
    __strong NSData *data=[NSURLConnection sendSynchronousRequest:request returningResponse:nil error:&err];
    __strong NSURLConnection *conn=[[NSURLConnection alloc]initWithRequest:request delegate:self];
    //初始化connectionData;
    self.connectionData=[[NSMutableData alloc]init];
}

-(void)connection:(NSURLConnection *)connection didReceiveResponse:(NSURLResponse *)response
{

    [self.delegate ReturnFileSize:self.tag length:response.expectedContentLength];
}

//接受数据
-(void)connection:(NSURLConnection *)connection didReceiveData:(NSData *)data{
    //获取服务器传递的数据
    [self.connectionData appendData:data];
    [self.delegate ReturnDownSize:self.tag length:data.length];
}
//接收数据成功
-(void)connectionDidFinishLoading:(NSURLConnection *)connection{
    if (self.connectionData.length>0)
    {
        [self.connectionData writeToFile:self.savePath atomically:YES];
        [self.delegate ReturnSucess:self.tag filePath:self.savePath];
    }
}
//接收数据失败
-(void)connection:(NSURLConnection *)connection didFailWithError:(NSError *)error{
    [self.delegate ReturnError:self.tag msg:[error localizedDescription]];
}


@end
