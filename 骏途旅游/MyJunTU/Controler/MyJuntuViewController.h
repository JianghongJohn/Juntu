//
//  MyJuntuViewController.h
//  骏途旅游
//
//  Created by mac10 on 15/10/5.
//  Copyright (c) 2015年 xs27_Group3. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BaseViewController.h"
@interface MyJuntuViewController : BaseViewController<UITableViewDataSource,UITableViewDelegate>
@property(nonatomic,copy)NSString *headImageUrl;
@end
