//
//  CDViewController.h
//  CompsDemo
//
//  Created by Wayne M. Hartman on 1/11/12.
//  Copyright (c) 2012 WayneHartman.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CDViewController : UIViewController
@property (retain, nonatomic) IBOutlet UIButton *settingsButton;
- (IBAction)didSelectSettings:(id)sender;

@end
