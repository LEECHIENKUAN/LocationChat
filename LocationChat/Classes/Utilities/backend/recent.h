//
// Copyright (c) 2015 Related Code - http://relatedcode.com
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#import <Parse/Parse.h>

//-------------------------------------------------------------------------------------------------------------------------------------------------
NSString*		StartPrivateChat		(PFUser *user1, PFUser *user2);
NSString*		StartMultipleChat		(NSMutableArray *users);

void			StartGroupChat			(PFObject *group, NSMutableArray *users);

//-------------------------------------------------------------------------------------------------------------------------------------------------
void			CreateRecentItem1		(PFUser *user, NSString *groupId, NSArray *members, NSString *description, PFUser *profile);
void			CreateRecentItem2		(PFUser *user, NSString *groupId, NSArray *members, NSString *description, PFUser *profile);

//-------------------------------------------------------------------------------------------------------------------------------------------------
void			UpdateRecentCounter1	(NSString *groupId, NSInteger amount, NSString *lastMessage);
void			UpdateRecentCounter2	(NSDictionary *recent, NSInteger amount, NSString *lastMessage);

//-------------------------------------------------------------------------------------------------------------------------------------------------
void			ClearRecentCounter1		(NSString *groupId);
void			ClearRecentCounter2		(NSDictionary *recent);

//-------------------------------------------------------------------------------------------------------------------------------------------------
void			DeleteRecentItems		(PFUser *user1, PFUser *user2);
void			DeleteRecentItem		(NSDictionary *recent);
