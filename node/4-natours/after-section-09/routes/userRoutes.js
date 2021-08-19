const express = require('express');
const userController = require('../controllers/userController');
const authenticationController = require('../controllers/authenticationController');

const router = express.Router();

router.post('/signup', authenticationController.signup);
router.post('/login', authenticationController.login);
router.post('/forgotPassword', authenticationController.forgotPassword);
router.patch('/resetPassword/:token', authenticationController.resetPassword);
router.patch(
  '/updateMyPassword',
  authenticationController.protect,
  authenticationController.updatePassword
);
router.patch(
  '/updateMe',
  authenticationController.protect,
  userController.updateMe
);
router.delete(
  '/deleteMe',
  authenticationController.protect,
  userController.deleteMe
);
router
  .route('/')
  .get(userController.getAllUsers)
  .post(userController.createUser);

router
  .route('/:id')
  .get(userController.getUser)
  .patch(userController.updateUser)
  .delete(userController.deleteUser);

module.exports = router;
