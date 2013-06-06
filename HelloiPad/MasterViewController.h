//
//  MasterViewController.h
//  HelloiPad
//
//  Created by James Robertson on 6/6/13.
//  Copyright (c) 2013 James Robertson. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
