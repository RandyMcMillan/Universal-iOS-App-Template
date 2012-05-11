//
//  UniversalExampleAppDelegate_Phone.h
//  UniversalExample
//
//  Created by Cory Wiles on 7/29/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface UniversalExampleAppDelegate_Phone : NSObject {
  
  UIWindow *window;
  UINavigationController *navigationController;
}

@property (nonatomic) IBOutlet UIWindow *window;
@property (nonatomic) IBOutlet UINavigationController *navigationController;

@end
