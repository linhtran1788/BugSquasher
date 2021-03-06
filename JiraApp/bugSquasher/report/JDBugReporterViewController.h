
//
//  JDBugReporterViewController.h
//  JiraApp
//
//  Created by John Doran on 11/05/2013.
//  Copyright (c) 2013 John Doran. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface JDBugReporterViewController : UIViewController<UITextViewDelegate, UITextFieldDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate>
{
    UIImage *_chosenImage;
    NSMutableArray *_logEntries;
}

@property (weak, nonatomic) IBOutlet UITextField *summaryTextField;
@property (weak, nonatomic) IBOutlet UILabel *usernameLabel;
@property (weak, nonatomic) IBOutlet UIImageView *avatarImage;
@property (weak, nonatomic) IBOutlet UITextView *descriptionArea;
@property (weak, nonatomic) IBOutlet UILabel *imageAttachedLabel;
@property (weak, nonatomic) IBOutlet UILabel *projCodeLabel;
@property (weak, nonatomic) NSString *projectCode;
@property (weak, nonatomic) IBOutlet UIActivityIndicatorView *loadingIcon;
@property (weak, nonatomic) IBOutlet UIButton *attachButton;
@property (weak, nonatomic) IBOutlet UIButton *submitButton;

- (IBAction)closedTaped:(id)sender;
- (IBAction)attachImage:(id)sender;
- (IBAction)sendBugToJira:(id)sender;
- (IBAction)refreshLoginStatus:(id)sender;

@end


