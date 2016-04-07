//
//  nativecameraViewController.h
//  nativecamera
//
//  Created by Wisemen on 7/04/2016.
//
//

#import <UIKit/UIKit.h>

// We can't import the CustomCamera class because it would make a circular reference, so "fake" the existence of the class like this:
@class nativecamera;

@interface nativecameraViewController : UIViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate>

// Action method
-(IBAction) takePhotoButtonPressed:(id)sender forEvent:(UIEvent*)event;

// Declare some properties (to be explained soon)
@property (strong, nonatomic) nativecamera* plugin;
@property (strong, nonatomic) UIImagePickerController* picker;

@end