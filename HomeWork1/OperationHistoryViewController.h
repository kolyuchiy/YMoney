//
//  OperationHistoryViewController.h
//  YMoney
//
//  Created by Дмитрий on 25.10.15.
//  Copyright © 2015 DMA. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface OperationHistoryViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITableView *operationHistory;
@property (weak, nonatomic) IBOutlet UITabBarItem *operationHistoryButton;

@end
