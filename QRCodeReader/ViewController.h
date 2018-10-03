//
//  ViewController.h
//  QRCodeReader
//
//  Created by Chitralekha Yellewar on 28/09/18.
//  Copyright © 2018 Chitralekha Yellewar. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

@interface ViewController : UIViewController
    @property (weak, nonatomic) IBOutlet UIView *viewPreview;
    @property (weak, nonatomic) IBOutlet UILabel *labelStatus;
    @property (weak, nonatomic) IBOutlet UIBarButtonItem *startButton;
    
    - (BOOL)startReading;
    
@end

