//
//  RDLoginController.h
//  Readdit
//
//  Created by Samuel Sutch on 9/5/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MBProgressHUD.h"
#import "MGSplitViewController.h"


@interface RDLoginController : UITableViewController <MBProgressHUDDelegate>
{
  IBOutlet id delegate;
  UITextField *usernameField;
  UITextField *passwordField;
  MGSplitViewController *splitController;
  MBProgressHUD *HUD;
}

@property(nonatomic, retain) id delegate;
@property(nonatomic, assign) MGSplitViewController *splitController;

@end
