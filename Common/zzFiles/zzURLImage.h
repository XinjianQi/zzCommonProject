//
//  zzURLImage.h
//  MFMClient
//
//  Created by zzzili on 14-3-9.
//  Copyright (c) 2014年 zzzili. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface zzURLImage : NSObject
+(UIImage*)GetImageFromUrl:(NSString *)url;
+(UIImage*)GetImageFromLocal:(NSString*)url;
+(NSData*)GetDataFromUrl:(NSString *)url;
@end

@interface zzImageView : UIImageView
{
    BOOL isCut;
}
-(id)initWithUrl:(NSString*)url;
-(id)initWithUrl:(NSString*)url defImage:(UIImage*)defImage;
+(int)DeleteAllCacheFile;

//带裁剪
-(void)setUrlWithCut:(NSString*)url;

+(UIImage*)getSubImage:(UIImage*)image rect:(CGRect)rect;
@end