//
//  zzURLImage.h
//
//  Created by zzzili on 14-3-9.
//  Copyright (c) 2014年 zzzili. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface zzURLImage : NSObject
//根据url获取image
+(UIImage*)GetImageFromUrl:(NSString *)url;

//根据url获取data数据
+(NSData*)GetDataFromUrl:(NSString *)url;

//根据本地文件名获取image
+(UIImage*)GetImageFromLocal:(NSString*)fileName;

//清除缓存图片
+(int)DeleteAllCacheFile;
@end

@interface zzImageView : UIImageView
{
    BOOL isCut;
}
///初始化url
-(id)initWithUrl:(NSString*)url;

//初始化url和默认图片
-(id)initWithUrl:(NSString*)url defImage:(UIImage*)defImage;

//带裁剪的异步下载（需要先设置frame，根据frame会自适应）
-(void)setUrlWithCut:(NSString*)url;

//图片剪切
+(UIImage*)getSubImage:(UIImage*)image rect:(CGRect)rect;
@end