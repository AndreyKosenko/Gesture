//
//  PanViewController.h
//  Gesture
//
//  Created by dev on 12/20/15.
//  Copyright © 2015 dev. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PanViewController : UIViewController
@property (strong, nonatomic) IBOutlet UIView *testView;
@property (strong, nonatomic) IBOutlet UILabel *horizontalVelocityLabel;
@property (strong, nonatomic) IBOutlet UILabel *verticalVelocityLabel;

@end
