//
//  RMTViewController.h
//  RMTutorial
//
//  Created by rjmiller2543 on 07/25/2016.
//  Copyright (c) 2016 rjmiller2543. All rights reserved.
//

@import UIKit;

@interface RMTViewController : UIViewController

@property(nonatomic,retain) IBOutlet UIButton *first;
@property(nonatomic,retain) IBOutlet UIButton *second;

-(IBAction)nextStep:(id)sender;

@end
