//
//  LWEHDUtils.h
//  jFlash
//
//  Created by Mark Makdad on 8/10/10.
//  Copyright 2010 Long Weekend Inc. All rights reserved.
//

#import <Foundation/Foundation.h>


/**
 * \brief   Utilities for helping work with HD/Retina resolution (iPhone4)
 * \details   Abstracts a lot of the hard work - so our apps can just use correct images
 * depending on their device.
 */
@interface LWERetinaUtils : NSObject
{

}

/**
 * \brief   Tells you whether or not the device has a retina display
 * \return   YES if iPhone 4
 */
+ (BOOL) isRetinaDisplay;


/**
 * \brief   Returns a filename with the retina naming convention if we have iPhone 4
 * \param   name Filename of an image
 * \return   Filename of retina-ready image (if not iPhone 4, returns same as param)
 */
+ (NSString*) retinaSafeImageName:(NSString*)name;

/**
 * \brief   Returns a CGRect that is OK to use for either retina or non-retina display
 * \param   rect Any CGRect
 * \return   If iPhone4, CGRect width&height properties will be 2x of parameter rect
 */
+ (CGRect) retinaSafeCGRect:(CGRect)rect;


@end
