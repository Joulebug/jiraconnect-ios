/**
   Copyright 2011 Atlassian Software

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
**/
#import <UIKit/UIKit.h>

#import <Foundation/Foundation.h>
#import "JMCSketchView.h"
#import "JMCSketch.h"
#import "JMCSketchScrollView.h"
#import <QuartzCore/QuartzCore.h>
#import "JMCSketchContainerView.h"
#import "JMCSketchViewControllerDelegate.h"
#import "JMCVector.h"
#import "JMCShapeView.h"

@interface JMCSketchViewController : UIViewController <UIAlertViewDelegate, UITextFieldDelegate, UIScrollViewDelegate, UIActionSheetDelegate, UIGestureRecognizerDelegate>
{
    JMCVector *vector;
    
@private
    
    id<JMCSketchViewControllerDelegate> __weak _delegate;
	IBOutlet JMCSketchScrollView * _scrollView;
    IBOutlet UIToolbar* _toolbar;
    NSNumber* _imageId;
    UIImage * _image;
    JMCSketchContainerView * _mainView;
}

@property (nonatomic, strong) JMCShapeView *shapeView;
@property (nonatomic, strong) JMCSketchContainerView * mainView;
@property (nonatomic, strong) JMCSketchScrollView * scrollView;
@property (nonatomic, weak) id<JMCSketchViewControllerDelegate> delegate;
@property (nonatomic, strong) NSNumber* imageId;
@property (nonatomic, strong) UIImage* image;

@property (nonatomic, strong) IBOutlet UIToolbar* toolbar;


-(UIImage*) createImageScaledBy:(float) dx;

- (IBAction) redoAction:(id)sender;
- (IBAction) undoAction:(id)sender;
- (IBAction) doneAction:(id)sender;
- (IBAction) deleteAction:(id)sender;


@end
