//
//  CZViewController.h
//  CZPicker
//
//  Created by chenzeyu on 06/27/2015.
//  Copyright (c) 2014 chenzeyu. All rights reserved.
//

@import UIKit;
#import <CZPicker/CZPickerView.h>

@interface CZViewController : UIViewController<CZPickerViewDataSource, CZPickerViewDelegate>
- (IBAction)showWithFooter:(id)sender;
- (IBAction)showWithoutFooter:(id)sender;

@end
