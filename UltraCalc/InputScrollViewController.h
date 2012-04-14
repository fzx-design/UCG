//
//  InputScrollViewController.h
//  UltraCalc
//
//  Created by Song  on 12-4-11.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FXLabel.h"
@interface InputScrollViewController : UIViewController
{
    __weak IBOutlet UIScrollView *scrollView;
    __weak IBOutlet FXLabel *inputLabel;
    UIFont *font;
    float minWidth;
    
    NSMutableArray *rectArray;
}

-(void)setText:(NSString*)string;
-(NSString*)text;

-(void)showRectFromCharIndex:(int)startIndex toIndex:(int)endIndex;

-(void)clearAllRect;

@end
