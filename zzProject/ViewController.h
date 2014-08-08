//
//  ViewController.h
//  zzProject
//
//  Created by zz on 14-7-31.
//  Copyright (c) 2014年 YunFeng. All rights reserved.
//

#import "zzViewController.h"

@interface ViewController : UIViewController<zzDownFileDelegate>
{
    long long processAllSize;
}
@property (weak, nonatomic) IBOutlet UIScrollView *baseScroll;
- (IBAction)touchGetPostMsg:(id)sender;
- (IBAction)touchScrolImage:(id)sender;
- (IBAction)touchDownShowImageView:(id)sender;
- (IBAction)touchSelectDate:(id)sender;
- (IBAction)touchSelectIndex:(id)sender;
- (IBAction)touchBiankuang:(id)sender;
@property (weak, nonatomic) IBOutlet UIButton *btnBiankuang;
@property (weak, nonatomic) IBOutlet UILabel *sizeLabel;
- (IBAction)touchLabelSize:(id)sender;
- (IBAction)touchAnimation:(id)sender;
- (IBAction)touchGetTime:(id)sender;
@property (weak, nonatomic) IBOutlet UIButton *btnTime;
- (IBAction)touchOpenSqlite:(id)sender;
- (IBAction)touchProcess:(id)sender;
- (IBAction)touchTopbar:(id)sender;
@property (weak, nonatomic) IBOutlet UIProgressView *process;
@property (weak, nonatomic) IBOutlet UILabel *processText;

@end
